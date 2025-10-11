/*
  Project Name: Day1_SOS
  Project Description: SOS (Morse Code)를 LED로 출력하는 예제

  Author: Minsu Kim <25-10631@knu.hs.kr>
  Created At: 2025-10-11
*/

const int BASE_SPEED = 250;
// const int LED_PINNO = LED_BUILTIN; // LED_BUILTIN은 13번의 enum임
const int LED_PINNO = 8;

// 수정 금지
void setup() {
  pinMode(LED_PINNO, OUTPUT);
}

void loop() {
  // "S"
  for (int i = 0; i < 3; i++) { 
    digitalWrite(LED_PINNO, HIGH);
    delay(BASE_SPEED);
    digitalWrite(LED_PINNO, LOW);
    delay(BASE_SPEED);
  }

  // "O"
  for (int i = 0; i < 3; i++) { 
    digitalWrite(LED_PINNO, HIGH);
    delay(BASE_SPEED * 3);
    digitalWrite(LED_PINNO, LOW);
    delay(BASE_SPEED * 3);
  }

  // "S"
  for (int i = 0; i < 3; i++) { 
    digitalWrite(LED_PINNO, HIGH);
    delay(BASE_SPEED);
    digitalWrite(LED_PINNO, LOW);
    delay(BASE_SPEED);
  }
}
