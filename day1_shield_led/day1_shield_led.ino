/*
  Project Name: Day1_Shield_LED
  Project Description: Shield를 활용하여 경찰차 경광등과 같은 LED 출력을 하는 예제

  Author: Minsu Kim <25-10631@knu.hs.kr>
  Created At: 2025-10-11
*/

// CONSTANTS
const int BASE_SPEED = 100; // LED on/off 간격
const int SHIELD_REDLED = 12; // 고정; Shield의 빨간색 LED의 Digital 핀번호
const int SHIELD_BLUELED = 13; // 고정; Shield의 파란색 LED의 Digital 핀번호

// 수정 금지
void setup() {
  pinMode(SHIELD_REDLED, OUTPUT);
  pinMode(SHIELD_BLUELED, OUTPUT);
}

void loop() {
  digitalWrite(SHIELD_REDLED, HIGH);
  delay(BASE_SPEED);
  digitalWrite(SHIELD_REDLED, LOW);
  delay(BASE_SPEED);

  digitalWrite(SHIELD_BLUELED, HIGH);
  delay(BASE_SPEED);
  digitalWrite(SHIELD_BLUELED, LOW);
  delay(BASE_SPEED);
}
