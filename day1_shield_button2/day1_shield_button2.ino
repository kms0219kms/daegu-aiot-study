/*
  Project Name: Day1_Shield_Button2
  Project Description: Shield를 활용하여 여러 버튼의 입력을 받는 예제

  Author: Minsu Kim <25-10631@knu.hs.kr>
  Created At: 2025-10-11

  Note: This example code is build on top of https://docs.arduino.cc/built-in-examples/digital/Button/
*/

// CONSTANTS
const int SW1_PIN = 2;
const int SW2_PIN = 3;
const int LED1_PIN = 13;
const int LED2_PIN = 12;

// VARIABLES
int button1State = HIGH;  // 버튼의 현재 상태 (1: UP, 0: DOWN(Pressed) - 풀업이라 반대임)
int button2State = HIGH;

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(SW1_PIN, INPUT);
  pinMode(SW2_PIN, INPUT);
}

void loop() {
  // 현재 버튼이 눌렸는지 Check
  button1State = digitalRead(SW1_PIN);
  button2State = digitalRead(SW2_PIN);

  // !! 아두이노는 풀업 (HIGH, LOW가 반대로 되므로 NOT 연산으로 처리)
  digitalWrite(LED1_PIN, !button1State);
  digitalWrite(LED2_PIN, !button2State);
}
