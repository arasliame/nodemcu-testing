#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <LiquidCrystal.h>
#include <ArduinoJSON.h>
#include <pb.h>
#include <config.h> //wifi pw in here

//https://diyi0t.com/lcd-display-tutorial-for-arduino-and-esp8266/
const int RS = D2, EN = D3, d4 = D6, d5 = D7, d6 = D8, d7 = D9;
LiquidCrystal lcd(RS, EN, d4, d5, d6, d7);


const char* host = "http://datamine.mta.info/";


//https://stackoverflow.com/questions/32707756/why-is-gtfs-so-difficult

void setup() {
  // put your setup code here, to run once:
  pinMode(D0,OUTPUT);

  Serial.begin(115200);

  lcd.begin(16,2);
  
  lcd.print("Data Grabber For:");
  lcd.setCursor(0, 1);
  lcd.print(host);

  WiFi.begin(ssid,password); 

  while (WiFi.status() != WL_CONNECTED) {
    //lcd.setCursor(0, 3);
    delay(300);
    Serial.print(". ");
  }

  //Show wifi connection worked and display our ip!
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("WiFi connected"); 
  lcd.setCursor(0, 1); 
  lcd.print("IP address: ");
  lcd.setCursor(0, 2);
  lcd.print(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D0,HIGH);
  delay(1000);
  digitalWrite(D0,LOW);
  delay(1000);
  


}