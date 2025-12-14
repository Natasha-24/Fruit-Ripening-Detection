#include <LiquidCrystal.h>

// initialize the LCD: (rs, en, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int mq5Pin = A0;   // Analog pin connected to MQ5
int ledPin = 8;      // LED pin
int sensorValue = 0; // Variable to store sensor value
int threshold = 100; // Set threshold for ripeness (adjust experimentally)

void setup()
{
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 2); // Initialize a 16x2 LCD
  lcd.print("Fruit Sensor");
  delay(2000);
  lcd.clear();
  Serial. Begin(9600);
}

void loop() 
{
  sensorValue = analogRead(mq135Pin); // Read gas sensor value
  Serial.println(sensorValue);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Gas Value: ");
  lcd.print(sensorValue);

  if (sensorValue > threshold)
  {
    digitalWrite(ledPin, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Fruit is Ripened");
  } 
  else 
  {
    digitalWrite(ledPin, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Not Ripened");
  }

  delay(1000); // Update every second
}
