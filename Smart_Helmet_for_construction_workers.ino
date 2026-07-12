#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// Define pins
#define DHTPIN 2
#define DHTTYPE DHT11
#define BUTTON_PIN 3
#define BUZZER_PIN 4
#define AIR_QUALITY_PIN A0

// Initialize objects
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2); // Adjust 0x27 if needed

// Timing variables
unsigned long previousMillis = 0;
const long interval = 2000; // 2 seconds for display updates
int displayState = 0;       // Tracks what is currently displayed

void setup() {
  Serial.begin(9600);
  Serial.println("Initializing...");

  pinMode(BUTTON_PIN, INPUT_PULLUP); // Button with internal pull-up
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW); // Ensure buzzer starts off

  lcd.init();
  lcd.backlight();

  dht.begin();

  lcd.setCursor(0, 0);
  lcd.print("Initializing...");
  delay(2000);
}

void loop() {
  // Check button state and control buzzer
  if (digitalRead(BUTTON_PIN) == HIGH) { // Button pressed
    digitalWrite(BUZZER_PIN, HIGH);    // Turn buzzer on
  } else {
    digitalWrite(BUZZER_PIN, LOW);     // Turn buzzer off
  }

  // Handle display updates using millis()
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    // Cycle through display states
    switch (displayState) {
      case 0:
        // Display temperature
        displayTemperature();
        displayState = 1;
        break;
      case 1:
        // Display humidity
        displayHumidity();
        displayState = 2;
        break;
      case 2:
        // Display air quality
        displayAirQuality();
        displayState = 0;
        break;
    }
  }
}

void displayTemperature() {
  float temperature = dht.readTemperature();
  if (isnan(temperature)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Temp Error!");
    return;
  }
  Serial.print("Temperature: ");
  Serial.println(temperature);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature, 1); // 1 decimal place
  lcd.print(" C");
}

void displayHumidity() {
  float humidity = dht.readHumidity();
  if (isnan(humidity)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Hum Error!");
    return;
  }
  Serial.print("Humidity: ");
  Serial.println(humidity);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.print(humidity, 1); // 1 decimal place
  lcd.print(" %");
}

void displayAirQuality() {
  int airQuality = analogRead(AIR_QUALITY_PIN);
  Serial.print("Air Quality: ");
  Serial.println(airQuality);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Air Quality:");
  lcd.setCursor(0, 1);
  lcd.print(airQuality);
}
