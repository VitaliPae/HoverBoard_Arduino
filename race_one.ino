#include <Arduino.h>
#include <LiquidCrystal.h>


LiquidCrystal lcd(2,3,4,5,6,7);


const int Motor1_Pin = 7;
const int Motor2_Pin = 8;
const int Motor3_Pin = 9;
const int Motor4_Pin = 10;

const int Poti_Pin = A0;

int PWM_linear = 0;
int PWM_LookUP = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(Motor1_Pin, OUTPUT);
  pinMode(Motor2_Pin, OUTPUT);
  pinMode(Motor3_Pin, OUTPUT);
  pinMode(Motor4_Pin, OUTPUT);
  pinMode(Poti_Pin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  PWM_linear = analogRead(Poti_Pin)/4;
  Serial.println(PWM_linear);

  // Ausgabe an Motoren
  analogWrite(Motor1_Pin, PWM_linear);
  analogWrite(Motor2_Pin, PWM_linear);
  analogWrite(Motor3_Pin, PWM_linear);
  analogWrite(Motor4_Pin, PWM_linear);
}
