          // Led in NodeMCU at pin GPIO16 (D0).
#define LED1 D5
#define LED2 D6
#define LED3 D7

#define IN_LED1 D0 // Led in NodeMCU at pin GPIO16 (D0).
#define IN_LED2 D4 // Led in NodeMCU at pin GPIO2 (D4).        

void setup() {
  
pinMode(IN_LED1, OUTPUT); // LED pin D0 as output.
pinMode(IN_LED2, OUTPUT); // LED pin D4 as output
pinMode(LED1, OUTPUT); 
pinMode(LED2, OUTPUT); 
pinMode(LED3, OUTPUT);
}

void loop() {
          
digitalWrite(IN_LED1, HIGH); // turn the D0/GPIO16/NODEMCU LED OFF by making the voltage HIGH
digitalWrite(IN_LED2, LOW); // turn the D4/GPIO2/ESP-12 LED ON by making the voltage LOW
delay(4000); // wait for 4 seconds.

digitalWrite(IN_LED1, LOW); // turn the D0/GPIO16/NODEMCU LED ON by making the voltage LOW
digitalWrite(IN_LED2, HIGH); // turn the D4/GPIO2/ESP-12 LED OFF by making the voltage HIGH
delay(4000); // wait for 4 seconds.
          
digitalWrite(LED1, HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
delay(500); // turn the LED off.(Note that LOW is the voltage level but actually the LED will be ON)
digitalWrite(LED1, LOW);
digitalWrite(LED2, HIGH);
digitalWrite(LED3,LOW);
delay(500);
digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
digitalWrite(LED3,HIGH);
delay(500);
          
}
