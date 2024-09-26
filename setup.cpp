#include <Arduino.h>

int RED_LED = 2;
int YELLOW_LED = 3;
int GREEN_LED = 4;

int BUTTON = 5;
int BUTTON_STATUS = LOW;

int RED_LED_PED = 6;
int GREEN_LED_PED = 7;

void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  
  pinMode(BUTTON, INPUT);
  
  pinMode(RED_LED_PED, OUTPUT);
  pinMode(GREEN_LED_PED, OUTPUT);
}

void loop()
{
  // STAGE 1
  digitalWrite(RED_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  
  digitalWrite(GREEN_LED_PED, HIGH);
  digitalWrite(RED_LED_PED, LOW);
  delay(10000);
  
  // STAGE 2
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  
  digitalWrite(GREEN_LED_PED, LOW);
  digitalWrite(RED_LED_PED, HIGH);
  delay(10000);
  
  //STAGE 3
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  
  digitalWrite(GREEN_LED_PED, LOW);
  digitalWrite(RED_LED_PED, HIGH);
  delay(5000);
  
  // STAGE 4
  BUTTON_STATUS = digitalRead(BUTTON);
  if (BUTTON_STATUS == HIGH) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
    
    digitalWrite(GREEN_LED_PED, HIGH);
    digitalWrite(RED_LED_PED, HIGH);
    delay(10000);
    
    digitalWrite(GREEN_LED_PED, LOW);
    digitalWrite(RED_LED_PED, HIGH);
  }
}