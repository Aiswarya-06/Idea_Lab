# Environment Monitoring and Alert System using Arduino

## Project Description

This project is an Arduino-based Environment Monitoring and Alert System designed to monitor essential environmental parameters in real time. It measures temperature, humidity, and air quality using dedicated sensors and displays the readings on a 16×2 I2C LCD. The system also includes a manual alert mechanism using a push button and buzzer.

The Arduino continuously reads data from the DHT11 temperature and humidity sensor and an analog air quality sensor. The measured values are displayed sequentially on the LCD at regular intervals using a non-blocking `millis()`-based timing approach. Sensor readings are also transmitted to the Serial Monitor for debugging and monitoring.

A push button is connected to trigger a buzzer, providing a simple alert or emergency notification feature. The project demonstrates the integration of multiple sensors and peripherals using the Arduino platform while following efficient programming practices.

### Features

* Real-time temperature monitoring using the DHT11 sensor.
* Real-time humidity monitoring using the DHT11 sensor.
* Air quality measurement using an analog gas/air quality sensor.
* Automatic display cycling between sensor readings every 2 seconds.
* 16×2 I2C LCD interface for clear data visualization.
* Push-button activated buzzer for manual alerts.
* Serial Monitor output for debugging and logging.
* Non-blocking program execution using `millis()` instead of `delay()`.

### Components Used

* Arduino Uno
* DHT11 Temperature and Humidity Sensor
* Analog Air Quality Sensor (MQ series or equivalent)
* 16×2 I2C LCD Display
* Push Button
* Active Buzzer
* Breadboard and Connecting Wires

### Software

* Arduino IDE
* Wire Library
* LiquidCrystal_I2C Library
* DHT Sensor Library

### Applications

* Indoor environment monitoring
* Smart home automation projects
* Laboratory monitoring
* Educational IoT and embedded systems experiments
* Basic air quality awareness systems

This project was developed as part of an Idea Lab exercise to demonstrate sensor interfacing, real-time data acquisition, LCD display control, and embedded system programming using the Arduino platform.
