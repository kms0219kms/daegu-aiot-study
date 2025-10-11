/*
  Project Name: Day1_Shield_Button
  Project Description: Shield를 활용하여 버튼의 입력을 받는 예제

  Author: Minsu Kim <25-10631@knu.hs.kr>
  Created At: 2025-10-11

  Note: This example code is build on top of https://docs.arduino.cc/built-in-examples/digital/Button/
*/

// CONSTANTS
const int BUTTON_PIN = 2;
const int LED_PIN = 13;

// VARIABLES
int buttonState = 0;  // 버튼의 현재 상태 (0: UP, 1: DOWN(Pressed))

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // 현재 버튼이 눌렸는지 Check
  buttonState = digitalRead(BUTTON_PIN);

  // (최적화) 어짜피 buttonState가 int이고 LOW/HIGH값을 가지므로 if문 축약함
  // digitalWrite(LED_PIN, buttonState);

  // !! 아두이노는 풀업 (HIGH, LOW가 반대로 되므로 NOT 연산으로 처리)
  digitalWrite(LED_PIN, !buttonState);
}
