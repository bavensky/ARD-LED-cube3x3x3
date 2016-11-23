#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define floor1 11
#define floor2 12
#define floor3 13


void setup() {
  for (int i = 2; i <= 13; i++)   {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  digitalWrite(floor1, LOW);
  digitalWrite(floor2, LOW);
  digitalWrite(floor3, LOW);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);

  delay(100);
}
