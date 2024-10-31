#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <PubSubClient.h>
#include <WiFi.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Pines
#define HEART_RATE_PIN 34   // Pin del sensor de ritmo cardíaco
#define TILT_SENSOR_PIN 35  // Pin del sensor de inclinación
#define BUZZER_PIN 25       // Pin del buzzer
#define LED_GREEN_PIN 2     // LED verde
#define LED_RED_PIN 15      // LED rojo
#define LED_BLUE_PIN 4      // LED azul
#define MOTOR_PIN 5

// Conexión MQTT
#define MQTT_MAX_PACKET_SIZE 256
const char* ssid = "POCO";
const char* password = "12345678";
const char* mqttServer = "broker.hivemq.com";
const char* mqttTopic = "terceraAyuda/";
const int mqttPort = 1883;
const char* mqttUser = NULL;
const char* mqttPassword = NULL;
bool isChangeLed = false;
int bpm = 0;
bool tiltActivated = false;

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(9600);

  // MQTT
  connectWifi();
  connectMQTT();
  subscribeToTopics();  // Suscribirse a los tópicos

  client.publish("test/topic", "Hello, MQTT");

  // Inicialización de la pantalla OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("Error: No se pudo encontrar la pantalla OLED en 0x3C!");
    while (1)
      ;
  }


  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.display();

  // Configuración de pines
  pinMode(HEART_RATE_PIN, INPUT);
  pinMode(TILT_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_BLUE_PIN, OUTPUT);

  pinMode(MOTOR_PIN, OUTPUT);
}

void loop() {
  client.loop();

  // Simulación de valores del acelerómetro
  float x = random(-160, 160) / 10.0;
  float y = random(-160, 160) / 10.0;
  float z = random(-160, 160) / 10.0;

  // Coordenadas de latitud y longitud
  String latitude = "21.167505";
  String longitude = "-100.929360";

  // Lectura simulada de BPM
  bpm = analogRead(HEART_RATE_PIN) % 40 + 60;

  // Verifica el estado del sensor de inclinación
  tiltActivated = digitalRead(TILT_SENSOR_PIN);

  // Lógica de LEDs
  if (!isChangeLed) {
    controlarLed();
  }

  // Si el tilt sensor está activado, emite un sonido con el buzzer
  if (tiltActivated) {
    Serial.println("Tilt activado: Emitiendo sonido...");
    tone(BUZZER_PIN, 1000);
    delay(200);
    noTone(BUZZER_PIN);
  }

  String tiltStatus = tiltActivated ? "activo" : "inactivo";
  Serial.println("Enviando estado de tilt");
  publishMQTT("tiltStatus", tiltStatus);


  // Imprime los datos en el Monitor Serial
  Serial.print("X: ");
  Serial.print(x);
  Serial.print(" ");
  Serial.print("Y: ");
  Serial.print(y);
  Serial.print(" ");
  Serial.print("Z: ");
  Serial.println(z);
  Serial.print("Latitud: ");
  Serial.print(latitude);
  Serial.print(", ");
  Serial.print("Longitud: ");
  Serial.println(longitude);
  Serial.print("BPM: ");
  Serial.println(bpm);

  // Muestra los datos en la pantalla OLED
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Acelerometro");
  display.print("X: ");
  display.println(x);
  display.print("Y: ");
  display.println(y);
  display.print("Z: ");
  display.println(z);

  // Coordenadas
  display.setCursor(0, 30);
  display.print("Lat: ");
  display.println(latitude);
  display.print("Long: ");
  display.println(longitude);

  // Muestra el BPM
  display.setCursor(0, 50);
  display.print("BPM: ");
  display.println(bpm);
  display.display();

  publishMQTT("bpm", String(to_string(bpm).c_str()));

  delay(5000);
}

void publishMQTT(String topic, String str) {
  char charArr[200];  // Buffer para almacenar el string convertido
  char top[200];      // Buffer para almacenar el topic completo

  str.toCharArray(charArr, sizeof(charArr));
  String fullTopic = mqttTopic + topic;
  fullTopic.toCharArray(top, sizeof(top));

  Serial.print("Sending value: ");
  Serial.println(charArr);
  Serial.print("On Topic: ");
  Serial.println(top);

  if (client.connected()) {
    client.publish(top, charArr);
  } else {
    connectMQTT();  // Reintentar la conexión
  }
}

void connectMQTT() {
  //connecting to a mqtt broker
  client.setServer(mqttServer, mqttPort);
  client.setCallback(callback);
  while (!client.connected()) {
    String client_id = "esp32-client-";
    client_id += String(WiFi.macAddress());
    Serial.printf("The client %s connects to the public MQTT broker\n", client_id.c_str());
    if (client.connect(client_id.c_str(), mqttUser, mqttPassword)) {
      Serial.println("Public EMQX MQTT broker connected");
    } else {
      Serial.print("failed with state ");
      Serial.print(client.state());
      delay(2000);
    }
  }
}

void connectWifi() {
  WiFi.begin(ssid, password);
  Serial.println("...................................");

  Serial.print("Connecting to WiFi.");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected to the WiFi network");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void subscribeToTopics() {
  const char* topics[] = {
    "terceraAyuda/led",
    "terceraAyuda/play",
    "terceraAyuda/resetPedometer",
    "terceraAyuda/motor"
  };

  int numTopics = sizeof(topics) / sizeof(topics[0]);

  for (int i = 0; i < numTopics; i++) {
    if (client.subscribe(topics[i])) {
      Serial.print("Subscribed to: ");
      Serial.println(topics[i]);
    } else {
      Serial.print("Failed to subscribe to: ");
      Serial.println(topics[i]);
    }
  }
}

void callback(char* topic, uint8_t* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  String message = "";

  for (int i = 0; i < length; i++) {
    message += (char)payload[i];
  }

  Serial.println(message);

  if (String(topic) == "terceraAyuda/led") {
    // Convert hexadecimal color code to RGB
    long color = strtol(message.c_str(), NULL, 16);
    int r = (color >> 16) & 0xFF;
    int g = (color >> 8) & 0xFF;
    int b = color & 0xFF;

    isChangeLed = true;

    rgbController(r, g, b);

    delay(2000);

    isChangeLed = false;
  } else if (String(topic) == "terceraAyuda/play") {
    // Reproducir grabación
    playMessage();
  } else if (String(topic) == "terceraAyuda/resetPedometer") {
    //resetStepCount();
  } else if (String(topic) == "terceraAyuda/motor") {
    if (message == "ON") {
      isChangeLed = true;
      digitalWrite(MOTOR_PIN, HIGH);
      Serial.println("Motor encendido");
      delay(5000);
      isChangeLed = false;
    } else if (message == "OFF") {
      isChangeLed = true;
      digitalWrite(MOTOR_PIN, LOW);
      Serial.println("Motor apagado");
      delay(5000);
      isChangeLed = false;
    }
  }
}

void playMessage() {
  Serial.println("Tilt activado: Emitiendo sonido...");
  tone(BUZZER_PIN, 1000);
  delay(200);
  noTone(BUZZER_PIN);
}

void rgbController(int r, int g, int b) {
  analogWrite(LED_RED_PIN, r);
  analogWrite(LED_GREEN_PIN, g);
  analogWrite(LED_BLUE_PIN, b);
}

int hexToDecimal(const std::string& hex) {
  int decimalValue;
  std::stringstream ss;
  ss << std::hex << hex;
  ss >> decimalValue;
  return decimalValue;
}

void hexToRGB(const std::string& hex, int& r, int& g, int& b) {
  if (hex.length() == 7 && hex[0] == '#') {
    std::string rHex = hex.substr(1, 2);
    std::string gHex = hex.substr(3, 2);
    std::string bHex = hex.substr(5, 2);

    r = hexToDecimal(rHex);
    g = hexToDecimal(gHex);
    b = hexToDecimal(bHex);
  } else {
    std::cerr << "Formato hexadecimal inválido" << std::endl;
  }
}

void controlarLed() {
  if (tiltActivated || bpm > 90 || bpm < 64) {
    // Encender LED amarillo (combinación de rojo y verde a máxima intensidad)
    analogWrite(LED_RED_PIN, 255);
    analogWrite(LED_GREEN_PIN, 255);
    analogWrite(LED_BLUE_PIN, 0);  // Apagado
    //digitalWrite(MOTOR_PIN, HIGH);
  } else if (bpm > 65) {
    // Encender LED verde
    analogWrite(LED_RED_PIN, 0);  // Apagado
    analogWrite(LED_GREEN_PIN, 255);
    analogWrite(LED_BLUE_PIN, 0);  // Apagado
  } else {
    // Apagar todos los LEDs si ninguna condición es cumplida
    analogWrite(LED_RED_PIN, 0);
    analogWrite(LED_GREEN_PIN, 0);
    analogWrite(LED_BLUE_PIN, 0);
    //digitalWrite(MOTOR_PIN, LOW);
  }
}