#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm;

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // Print a message to the LCD
  lcd.print("Distance:");
  
  // Set up the sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the TrigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Trigger the sensor by setting the trigPin high for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the echoPin, and calculate the distance
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance in cm
  distanceCm = duration * 0.034 / 2;
  
  // Set the cursor to the first column, second row
  lcd.setCursor(0, 1);
  
  // Print the distance to the LCD
  lcd.print(distanceCm);
  lcd.print(" cm   ");
  
  // Wait for a bit before measuring again
  delay(500);
}
