# 3ra-Ayuda Dispositivo Funcional de ayuda a los adultos mayores

## Visión ##
Nuestra visión es mejorar la calidad de vida de los adultos mayores y proporcionar tranquilidad a sus cuidadores y familiares, a través de un dispositivo IoT inteligente que combina tecnología GPS y monitoreo de salud para garantizar la seguridad y el bienestar de nuestros seres queridos.

**3ra Ayuda** es un dispositivo IoT inteligente diseñado para localizar a un adulto mayor mediante GPS y monitorear su ritmo cardíaco y temperatura corporal. Este dispositivo proporciona seguridad y tranquilidad tanto a los usuarios como a sus cuidadores y familiares.

## Software empleado

| Nombre               | Licencia                                         |
|----------------------|--------------------------------------------------|
| Thonny               | The MIT License (MIT)                            |
| Arduino IDE          | AGPL-3.0 license                                 |
| Fritzing             | GNU GPL v3                                       |
| Node-RED             | Apache License 2.0                               |
| Visual Studio Code   | Licencia MIT, Binarios: Freeware                 |
| Tinkercad            | Free for everyone                                |
| NEO-6M_GPS           | The MIT License (MIT)                            |
| SparkFun MAX3010x    | Creative Commons Share-alike 4.0 International   |
| Visual Studio        | Microsoft Software License Terms                 |
| Flutter              | BSD 3-Clause License                             |
| fl_chart             | MIT license                                      |
| flutter_map          | BSD-3-Clause license                             |
| latlong              | Apache 2.0                                       |
| mqtt_client          | MIT License                                      |
| supabase_flutter     | Copyright (c) 2020 Supabase                      |

## Sensores y Módulos Utilizados

| Componente           | Descripción                                                   | Precio | Imagen |
|----------------------|---------------------------------------------------------------|---------|--------|
| ESP32                | Microcontrolador con Wi-Fi y Bluetooth integrado.             | $140    | <img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/a9ce89ca-4041-48cc-84a3-2dd9e7d577d0" width="150" height="100"> |
| Módulo GPS           | Módulo para la localización precisa mediante GPS.             | $160    | <img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/e4667e00-37f9-40b2-97b2-cc5a31554e27" width="150" height="100"> |
| Sensor de Ritmo Cardíaco | Sensor óptico (PPG) para medir el ritmo cardíaco del usuario. | $199  | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/20357a488/sensor-de-pulso-cardiaco.jpg" width="150" height="100"> |
| Acelerómetro y Giroscopio           | Módulo Sensor con acelerómetro y giroscopio.             | $90    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/216213368/sensor-con-acelerometro-y-giroscopio.jpg" width="150" height="100"> |
| Sensor de Inclinación(Mercurio)           | Módulo Sensor con acelerómetro y giroscopio.             | $90    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/216213368/sensor-con-acelerometro-y-giroscopio.jpg" width="150" height="100"> |
| Buzzer (Zumbador)           | Módulo Buzzer Activo.             | $16    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/21409dbc1/mini-buzzer-de-4-khz-a-de-1-5-a-16-vcc-con-se-al-de-tono-constante-de-85-db.jpg" width="150" height="100"> |
| Led RGB           | Módulo de Diodo Led RGB.             | $15    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/21726305e/led-de-5-mm-rgb.jpg" width="150" height="100"> |
| Gabinete           | Gabinete de Plastico 7.6 x 2.7 x 5 Cm.             | $35    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/1729991d4/gabinete-plastico-de-7-6-x-2-7-x-5-cm.jpg" width="150" height="100"> |
| Botón           | Micro Switch de push, 4 Terminales             | $2    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/16167a140/micro-switch-de-push-con-4-terminales.jpg" width="150" height="100"> |
| Cautin           | Cautín para Soldar Componentes             | $119    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/166535a61/cautin-tipo-lapiz-de-35-watts.jpg" width="150" height="100"> |
| Estaño           | Estaño para Soldar Componentes             | $59    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/18700be07/tubo-de-17-gramos-de-soldadura-con-aleacion-esta-o-plomo-60-40.jpg" width="150" height="100"> |
|Placa Fenólica           | Placa Fenólica perforada Tipo Protoboard de 7 x 14.5 Cm             | $49    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/15125c48c/placa-fenolica-perforada-tipo-protoboard-de-7-cm-x-14-5-cm.jpg" width="150" height="100"> |
| Pasta Para Soldar           | Pasta para soldar en lata con 60 gramos.             | $39    | <img src="https://www.steren.com.mx/media/catalog/product/cache/bb0cad18a6adb5d17b0efd58f4201a2f/image/18699fcc0/pasta-para-soldar-en-lata-con-60-gramos.jpg" width="150" height="100"> |


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
|Imagén de la inserción de los datos y Graficado de Estos mismos |<img src="https://github.com/user-attachments/assets/444e6f45-5db9-4673-ba10-cdd43a5bfa19" width="250" height="250">|
|Imagén de los Datos recibidos de los sensores e insertados una base de Datos en estructura|<img src="https://github.com/CDuav/3ra-Ayuda/assets/106613848/6891ab1b-1230-42a1-95fc-df144df19e7e" width="250" height="250">|
|Imagén de los Datos recibidos de los sensores e insertados una Grafica de la Aplicación de Flutter|<img src="https://github.com/user-attachments/assets/f917e59b-328c-4222-9d63-0baf8c983ac0" width="250" height="250">|
|Graficado en Tiempo Real de los Componentes y sensores.                                |<img src="https://github.com/user-attachments/assets/c56fcc4f-dac0-4597-8120-be195ffaaea2" width="250" height="250">|
|Graficado en Tiempo Real de los Componentes y sensores.                   |<img src="https://github.com/user-attachments/assets/c56fcc4f-dac0-4597-8120-be195ffaaea2" width="250" height="250">|
|Prototipo dibujado del producto Final Sujeto a Cambios posteriores.     |<img src="https://github.com/user-attachments/assets/102a4834-6e70-4eb7-b986-52937a978220" width="250" height="250">|
|Prototipo Final de componentes y Sensores.                                |<img src="https://github.com/user-attachments/assets/542783a0-bda2-4adb-b1ef-8133c64cd12c" width="250" height="250">|





## Repositorio de la Aplicación Móvil
- [TerceraAyuda](https://github.com/DANNYLOOL/TerceraAyuda)

## Video Demostrativo de funcionamiento

- [Video Demostrativo del funcionamiento](https://drive.google.com/file/d/18fjk50ynluQuUq2nyjW8mvR03PXVgkPZ/view?usp=drive_link)
- [Video Demostrativo de la Aprobación del Cliente](https://drive.google.com/file/d/1JYD6bhK07k4_Yf4YZmh0bJaHgBp5uZ7O/view?usp=drive_link)

## Carta de Aprobación del Cliente
[Carta Firmada](https://drive.google.com/file/d/1tJhqwnM_O-UBTl9HT_Y2_T10SPMj20Rb/view?usp=drive_link)

![image](https://github.com/user-attachments/assets/63e1a29a-578c-4796-b5af-832d1dd0d608)

