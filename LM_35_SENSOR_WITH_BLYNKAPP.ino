#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "sM2jtTWNqCKAnkRagGmPJ701ZUMTTd3w"; // Change auth code according to the given pull request
var PlayerWidget = new blynk.VirtualPin(0);
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "nikhil"; // Enter your WiFi SSID
char pass[] = "oneplusone"; // Enter your WiFi password
BlynkTimer timer;

void myTimerEvent()
{
int  sensorData = analogRead(A0);
float millivolts = (sensorData/1023.0) * 3300; //3300 is the voltage provided by NodeMCU
float celsius = millivolts/10;

  // Started serial monitor
  
  Serial.begin(9600);
  Serial.print("The Serial Monitor has Arrived!");

  Serial.print("The Serial Monitor has Arrived!\n");
  delay(500);

Serial.print("in DegreeC=   ");
Serial.println(celsius);
Blynk.virtualWrite(V0, celsius); 
if(celsius >32)
{
  Blynk.notify("NodeMCU-Temptrature over 32");
   Blynk.email("nikhilkutta@gmail.com", "ESP8266 Alert", "Temperature over32C!"); // Enter your email here
}}
void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(5000L, myTimerEvent);
}

void loop()
{
  Blynk.run();
  timer.run(); // Initiates BlynkTimer
  }
