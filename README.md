# 🦺 Smart Working Helmet for Construction Workers

An Arduino-based smart safety helmet designed to improve the safety of construction workers by monitoring environmental conditions and providing an emergency alert system.

## 📖 Project Overview

Construction sites expose workers to various environmental hazards such as poor air quality, high temperatures, and uncomfortable humidity levels. This project aims to enhance worker safety by continuously monitoring these parameters and displaying them in real time.

The helmet also includes a manual emergency alert feature through a push-button activated buzzer, allowing workers to signal for assistance when required.

This project was developed as part of the **Idea Lab** course.

---

## ✨ Features

- 🌡️ Real-time temperature monitoring
- 💧 Humidity monitoring
- 🌫️ Air quality monitoring
- 📟 16×2 I2C LCD display for live readings
- 🔔 Push-button activated emergency buzzer
- ⏱️ Automatic sensor display updates every 2 seconds
- 💻 Serial Monitor support for debugging
- ⚡ Efficient non-blocking programming using `millis()`

---

## 🛠️ Hardware Components

- Arduino Uno
- DHT11 Temperature & Humidity Sensor
- MQ Series Air Quality Sensor
- 16×2 I2C LCD Display
- Push Button
- Active Buzzer
- Breadboard
- Jumper Wires

---

## 💻 Software Requirements

- Arduino IDE
- Wire Library
- LiquidCrystal_I2C Library
- DHT Sensor Library

---

## 🔌 Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| DHT11 Sensor | D2 |
| Push Button | D3 |
| Buzzer | D4 |
| Air Quality Sensor | A0 |
| LCD (I2C) | SDA, SCL |

---

## ⚙️ Working Principle

1. The DHT11 sensor measures temperature and humidity.
2. The air quality sensor continuously monitors the surrounding air.
3. Every two seconds, the LCD cycles through:
   - Temperature
   - Humidity
   - Air Quality
4. Sensor readings are simultaneously displayed on the Serial Monitor.
5. Pressing the push button activates the buzzer, providing an emergency alert.

---

## 📂 Project Structure

```
Idea_Lab/
│
├── README.md
├── Smart_Working_Helmet.ino
├── images/
├── circuit/
└── docs/
```

---

## 🚀 Future Enhancements

- Automatic gas leak detection and warning
- Fall detection using an accelerometer
- Helmet wearing detection
- GPS location tracking
- GSM/SMS emergency notification
- IoT cloud monitoring
- Mobile application integration
- Rechargeable battery management system

---

## 👩‍💻 Author

**Aiswarya S**

B.Tech Electronics and Communication Engineering (ECE)

TKM College of Engineering

---

## 📜 License

This project is intended for educational and academic purposes as part of the **Idea Lab** course.
