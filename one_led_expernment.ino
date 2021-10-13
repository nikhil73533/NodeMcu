// Code to blink LED using NodeMCU

#define LED1 D4

void setup() {
  pinMode(LED1,OUTPUT);

}

void loop() {
  digitalWrite(LED1,HIGH);
  delay(2000);
  digitalWrite(LED1,LOW);
  delay(2000);

}
