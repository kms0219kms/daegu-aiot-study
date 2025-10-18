/*
  Project Name: Day2_VoltageLed
  Project Description: 시리얼 전압 (Vdc)에 따라서, LED가 점열하는 속도가 조절되는 예제

  Author: Minsu Kim <25-10631@knu.hs.kr>
  Created At: 2025-10-18
*/

const int SENSOR_PIN = A0;
const int LED_PIN = 13;

// 수정 금지
void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // ADC: 0~5Vdc -> 0~1023
  int sensorValue = analogRead(sensorValue);
  Serial.println(sensorValue);

  // LED 점멸
  digitalWrite(LED_PIN, HIGH);
  delay(sensorValue * (1000.0 / 1024.0));
  digitalWrite(LED_PIN, LOW);
  delay(sensorValue * (1000.0 / 1024.0));
}
