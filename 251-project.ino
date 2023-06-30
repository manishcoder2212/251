
#include<WiFi.h>


const char ssid[] = "home";
const char password[] = "12345678";


const int potpin = 34;

void setup()
{
  Serial.begin(115200);

 
  Serial.print("Connecting to : ");
  Serial.println(ssid);
  WiFi.begin(ssid , password);
  while (WiFi.status()  !=  WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println("Connected with Wifi !");
}

void loop()
{

  //  reading potentiometer at an interval of 1 sec
  int pot = analogRead(potpin);
  Serial.print("Pot values : ");
  Serial.println(pot);
  delay(1000);

}