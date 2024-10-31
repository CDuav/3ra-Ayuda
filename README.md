# 3ra-Ayuda Dispositivo Funcional de ayuda a los adultos mayores

## Visión ##
Nuestra visión es mejorar la calidad de vida de los adultos mayores y proporcionar tranquilidad a sus cuidadores y familiares, a través de un dispositivo IoT inteligente que combina tecnología GPS y monitoreo de salud para garantizar la seguridad y el bienestar de nuestros seres queridos.

**3ra Ayuda** es un dispositivo IoT inteligente diseñado para localizar a un adulto mayor mediante GPS y monitorear su ritmo cardíaco y temperatura corporal. Este dispositivo proporciona seguridad y tranquilidad tanto a los usuarios como a sus cuidadores y familiares.

## Software Utilizado ##
Thonny IDE - Versión: 3.3.13 - Licencia de uso Libre(https://github.com/thonny/thonny/tree/master/licenses)

## Sensores y Módulos Utilizados

| Componente           | Descripción                                                   | Precio | Imagen |
|----------------------|---------------------------------------------------------------|---------|--------|
| ESP32                | Microcontrolador con Wi-Fi y Bluetooth integrado.             | $140    | <img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/a9ce89ca-4041-48cc-84a3-2dd9e7d577d0" width="150" height="100"> |
| Módulo GPS           | Módulo para la localización precisa mediante GPS.             | $160    | <img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/e4667e00-37f9-40b2-97b2-cc5a31554e27" width="150" height="100"> |
| Sensor de Ritmo Cardíaco | Sensor óptico (PPG) para medir el ritmo cardíaco del usuario. | $199  | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/20357a488/sensor-de-pulso-cardiaco.jpg" width="150" height="100"> |
| Acelerómetro y Giroscopio           | Módulo Sensor con acelerómetro y giroscopio.             | $90    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/216213368/sensor-con-acelerometro-y-giroscopio.jpg" width="150" height="100"> |
| Sensor de Inclinación(Mercurio)           | Módulo Sensor con acelerómetro y giroscopio.             | $90    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/216213368/sensor-con-acelerometro-y-giroscopio.jpg" width="150" height="100"> |
| Buzzer (Zumbador)           | Módulo Buzzer Activo.             | $16    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/21409dbc1/mini-buzzer-de-4-khz-a-de-1-5-a-16-vcc-con-se-al-de-tono-constante-de-85-db.jpg" width="150" height="100"> |
| Led RGB           | Módulo de Diodo LEDRGB.             | $15    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/21726305e/led-de-5-mm-rgb.jpg" width="150" height="100"> |

## Ejemplos de Funcionamiento
- **Escenario 1:** El usuario sale de su casa y el dispositivo sigue enviando su ubicación GPS a la aplicación móvil. Si el usuario se pierde o sale de una zona segura, la aplicación notifica a los cuidadores.
- **Escenario 2:** Si el dispositivo detecta que la frecuencia cardíaca del usuario es anormalmente alta o baja, envía una alerta inmediata a los cuidadores y sugiere verificar su estado de salud.
- **Escenario 3:** La temperatura corporal del usuario se monitorea continuamente y cualquier cambio significativo genera una notificación para tomar acciones preventivas.


## Características Principales - Epicas

### Localización GPS
- **Módulo GPS Integrado:** Utiliza un módulo GPS de alta precisión para rastrear la ubicación del usuario en tiempo real.
- **Conectividad:** Puede conectarse a través de redes celulares (4G/5G) o Wi-Fi para enviar datos de localización a una aplicación móvil o a una plataforma en la nube.

### Monitoreo del Ritmo Cardíaco
- **Sensor de Ritmo Cardíaco:** Equipado con un sensor óptico (PPG - fotopletismografía) que mide el ritmo cardíaco de manera continua.
- **Alertas de Ritmo Cardíaco:** Envía notificaciones si se detectan anomalías en el ritmo cardíaco, como taquicardia o bradicardia.

### Monitoreo de Temperatura Corporal
- **Sensor de Temperatura:** Incluye un sensor de temperatura de contacto que mide la temperatura corporal de manera precisa.
- **Alertas de Temperatura:** Genera alertas si la temperatura corporal del usuario supera o cae por debajo de los umbrales definidos.

### Diseño y Ergonomía
- **Forma y Tamaño:** Diseñado para ser compacto y ligero, se puede usar en la cintura como un cinturón o con un clip.
- **Materiales:** Fabricado con materiales hipoalergénicos y cómodos para uso prolongado.

### Autonomía y Carga
- **Batería:** Batería de larga duración que permite varios días de uso con una sola carga.
- **Carga Rápida:** Compatible con carga rápida a través de USB-C.

### Interfaz y Aplicaciones
- **Aplicación Móvil:** Disponible para Android e iOS, la aplicación permite a los cuidadores y familiares monitorear en tiempo real la ubicación, el ritmo cardíaco y la temperatura del usuario.
- **Notificaciones y Alertas:** La aplicación envía notificaciones push y correos electrónicos en caso de detección de situaciones de emergencia.

### Seguridad y Privacidad
- **Cifrado de Datos:** Toda la comunicación de datos está cifrada para proteger la privacidad del usuario.
- **Acceso Controlado:** Solo personas autorizadas pueden acceder a la información del dispositivo.

## Uso y Beneficios
- **Monitoreo en Tiempo Real:** Proporciona tranquilidad a los cuidadores y familiares al permitirles monitorear la ubicación y la salud del adulto mayor en tiempo real.
- **Prevención de Emergencias:** La detección temprana de anomalías en el ritmo cardíaco o temperatura corporal puede prevenir emergencias médicas.
- **Movilidad Segura:** Las geocercas y las alertas de localización ayudan a mantener al usuario seguro y localizarlo rápidamente si se pierde.
- **Independencia:** Permite a los adultos mayores mantener su independencia mientras brinda una capa adicional de seguridad.

## Aplicación de Monitoreo
- *La Aplicación* se Creara en una app en el Framework Dart o Flutter que permiten crear aplicaciones web y Nativas para poder desplegarlas en un entorno Virtual
- *La Aplicación* deberá poder desplegarse en un Dispositivo Smart
- *La Aplicación* deberá ser capaz de concetar de manera Directa con el Dispositivo para verificar las Gráficas de los sensores del usuario que lleva el Dispositivo Wearable
  
**3ra Ayuda** combina tecnologías avanzadas para proporcionar un cuidado integral y mejorar la calidad de vida de los adultos mayores, permitiéndoles vivir de manera más independiente y segura.

## Servicios Implementados
|Descripción                                                                                        |  Imagen                                                                                                                     |
|---------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------|
|Imagen de las conexiones básicas del prototipo actual /07/06/2024                                  |<img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/334219b9-89c3-43e9-b46b-862d35064912" width="250" height="250">|
|Imagén de los nodos en Node Red que realizan la inserción de los datos y Graficado de Estos mismos |<img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/452c7492-10ad-442e-9c23-1a6513d14f75" width="250" height="250">|
|Imagén de los Datos recibidos de los sensores e insertados una base de Datos en estructura         |<img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/6891ab1b-1230-42a1-95fc-df144df19e7e" width="250" height="250">|
|Imagén de los Datos recibidos de los sensores e insertados una Grafica de Node Red                 |<img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/ab604081-76bc-468f-ad57-e82184dbac7f" width="250" height="250">|
|Prototipo dibujado del producto Final Sujeto a Cambios posteriores.                                |<img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/e9a85f6c-13ec-484d-a9d3-cebc13dd92af" width="250" height="250">|

