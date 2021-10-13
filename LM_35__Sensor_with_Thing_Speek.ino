// Using the LM35 temperature sensor and sending data to Thingspeak using NodeMCU ESP8266

#include <ESP8266WiFi.h>

String apiWritekey = "Q8ZPIGSTCIMIGAQC";
const char* ssid = "AndroidAPF452";
const char* password = "wintersoldier123";

const char* server = "api.thingspeak.com";
float resolution = 3.3/1024; // 3.3 V is the supply voltage
WiFiClient client;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.disconnect();
  delay(10);
  WiFi.begin(ssid, password);

  Serial.println();
  Serial.println();
  Serial.print("Connecting To ");
  Serial.print(ssid);
  
  WiFi.begin(ssid, password); 

  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
<<<<<<< HEAD
  
}
=======

  Serial.println(" ");
  Serial.print("NodeMCU Connected to WiFi ");
  Serial.println(ssid);
  Serial.println();
>>>>>>> bc9795bfb6aeb7d35847e9520a4aaad4ea34b9b1
 
}

void loop() {
  // put your main code here, to run repeatedly:

  float temp = (analogRead(A0) * resolution) * 100;
  
<<<<<<< HEAD
  }
=======
  if (client.connect(server,80))
  {  
    String tsData = apiWritekey;
           tsData +="&field1=";
           tsData += String(temp);
           tsData += "\r\n\r\n";
 
     client.print("POST /update HTTP/1.1\n");
     client.print("Host: api.thingspeak.com\n");
     client.print("Connection: close\n");
     client.print("X-THINGSPEAKAPIKEY: "+apiWritekey+"\n");
     client.print("Content-Type: application/x-www-form-urlencoded\n");
     client.print("Content-Length: ");
     client.print(tsData.length());
     client.print("\n\n");  // the 2 carriage returns indicate closing of Header fields & starting of data
     client.print(tsData);
 
     Serial.print("Temperature: ");
     Serial.println(temp);
     Serial.println("uploaded to Thingspeak server....");
  }
  client.stop();
 
  Serial.println("Waiting to upload next reading...");
  Serial.println();
    delay(1000);

}
>>>>>>> bc9795bfb6aeb7d35847e9520a4aaad4ea34b9b1
