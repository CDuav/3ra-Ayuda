# 3ra-Ayuda
Dispositivo Funcional de ayuda a los adulto mayores

**3ra Ayuda** es un dispositivo IoT inteligente diseñado para localizar a un adulto mayor mediante GPS y monitorear su ritmo cardíaco y temperatura corporal. Este dispositivo proporciona seguridad y tranquilidad tanto a los usuarios como a sus cuidadores y familiares.

## Características Principales

### Localización GPS
- **Módulo GPS Integrado:** Utiliza un módulo GPS de alta precisión para rastrear la ubicación del usuario en tiempo real.
- **Conectividad:** Puede conectarse a través de redes celulares (4G/5G) o Wi-Fi para enviar datos de localización a una aplicación móvil o a una plataforma en la nube.
- **Geocercas:** Permite configurar zonas seguras y envía alertas si el usuario sale de estas áreas predeterminadas.

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

## Ejemplos de Funcionamiento
- **Escenario 1:** El usuario sale de su casa y el dispositivo sigue enviando su ubicación GPS a la aplicación móvil. Si el usuario se pierde o sale de una zona segura, la aplicación notifica a los cuidadores.
- **Escenario 2:** Si el dispositivo detecta que la frecuencia cardíaca del usuario es anormalmente alta o baja, envía una alerta inmediata a los cuidadores y sugiere verificar su estado de salud.
- **Escenario 3:** La temperatura corporal del usuario se monitorea continuamente y cualquier cambio significativo genera una notificación para tomar acciones preventivas.



## Sensores y Módulos Utilizados

| Componente           | Descripción                                                   |
|----------------------|---------------------------------------------------------------|
| ESP32                | Microcontrolador con Wi-Fi y Bluetooth integrado.             |
| Pantalla LCD         | Pantalla para mostrar información relevante al usuario.       |
| Sensor de Temperatura| Sensor para medir la temperatura corporal del usuario.        |
| Módulo GPS           | Módulo para la localización precisa mediante GPS.             |
| Sensor de Impacto    | Sensor para detectar caídas o impactos fuertes.               |
| Sensor de Ritmo Cardíaco | Sensor óptico (PPG) para medir el ritmo cardíaco del usuario. |

**3ra Ayuda** combina tecnologías avanzadas para proporcionar un cuidado integral y mejorar la calidad de vida de los adultos mayores, permitiéndoles vivir de manera más independiente y segura.
