#include <IRremote.h> 
 
const int segmentPins[] = {D0, D1, D2, D3, D4, D5, D6}; // Pins D0 to D6 for segments 'a' to 'g' 
const int IR_RECEIVER_PIN = D7; // IR sensor OUT pin connected to D7 on ESP8266 
 
// Define the segments for each digit (common cathode) 
const byte digitSegments[10][7] = { 
  {1, 1, 1, 1, 1, 1, 0}, // 0 
  {0, 1, 1, 0, 0, 0, 0}, // 1 
  {1, 1, 0, 1, 1, 0, 1}, // 2 
  {1, 1, 1, 1, 0, 0, 1}, // 3 
  {0, 1, 1, 0, 0, 1, 1}, // 4 
  {1, 0, 1, 1, 0, 1, 1}, // 5 
  {1, 0, 1, 1, 1, 1, 1}, // 6 
  {1, 1, 1, 0, 0, 0, 0}, // 7 
  {1, 1, 1, 1, 1, 1, 1}, // 8 
  {1, 1, 1, 1, 0, 1, 1}  // 9 
}; 
9 
 
 
int count = 0; 
void setup() { 
  for (int i = 0; i < 7; i++) { 
    pinMode(segmentPins[i], OUTPUT); 
  } 
 
  // Initialize the IR sensor pin 
  pinMode(IR_RECEIVER_PIN, INPUT); 
 
  Serial.begin(115200); 
} 
 
void loop() { 
  // Read the state of the IR sensor 
  int irSensorState = digitalRead(IR_RECEIVER_PIN); 
 
  if (irSensorState == LOW) { 
    // Object detected 
    count++; 
 
    if (count > 9) { 
      count = 0; 
    } 
 
    displayCount(); 
  } 
 
  // Delay to make the count visible for a short time 
  delay(1000); 
} 
 
void displayDigit(int digit) { 
  if (digit >= 0 && digit <= 9) { 
    for (int i = 0; i < 7; i++) { 
      digitalWrite(segmentPins[i], digitSegments[digit][i]); 
    } 
  } 
} 
 
void displayCount() { 
  // Display the count on the 7-segment display 
  displayDigit(count); 
} 