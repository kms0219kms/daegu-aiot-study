/*
  Project Name: Day2_Light
  Project Description: 특정 임계값에 따라서, 어둡다면 불을 켜고 밝다면 불을 끄는 예제

  Author: Minsu Kim <25-10631@knu.hs.kr>
  Created At: 2025-10-18
*/

const int SENSOR_PIN = A1;
const int LED_PIN = 13;
const int THRESHOLD = 650;  // -> 임계치

// 수정 금지
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(SENSOR_PIN);

  // 임계값보다 밝기가 크면 (밝으면)
  if (analogValue > THRESHOLD) {
    // 불을 끈다
    digitalWrite(LED_PIN, LOW);
  } else {
    // 어두우면 불을 켠다
    digitalWrite(LED_PIN, HIGH);
  }

  Serial.println(analogValue);
  delay(1);
}
