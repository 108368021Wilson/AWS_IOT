#include <AWS_IOT.h>
#include <WiFi.h>
#include "DHT.h"
#define DHTPIN 16 
#define LED 2

void LEDsetup() {
  pinMode(LED,OUTPUT);
}

void LEDBlink() {
  delay(500);
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
}
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
AWS_IOT hornbill;
char WIFI_SSID[]="Mobile";
char WIFI_PASSWORD[]="Crimping@@2020";
char HOST_ADDRESS[]="a1o7su4fl8ai2f-ats.iot.cn-northwest-1.amazonaws.com.cn";
char CLIENT_ID[]= "basicPubSub";
char TOPIC_NAME[]= "sdk/test/Python";

int status = WL_IDLE_STATUS;
int tick=0,msgCount=0,msgReceived = 0;
char payload[512];
char rcvdPayload[512];
int count=0;

void setup() {
    LEDsetup();
    
    Serial.begin(115200);
    delay(2000);

    while (status != WL_CONNECTED)
    {
        Serial.print("Attempting to connect to SSID: ");
        Serial.println(WIFI_SSID);
        status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
        delay(5000);
    }

    Serial.println("Connected to wifi");

    if(hornbill.connect(HOST_ADDRESS,CLIENT_ID)== 0)
    {
        Serial.println("Connected to AWS");
        delay(1000);
    }
    else
    {
        Serial.println("AWS connection failed, Check the HOST Address");
        while(1);
    }
    delay(2000);
    dht.begin();
}


void dhtloop(){
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    if (isnan(h) || isnan(t)) {
        Serial.println("Failed to read from DHT sensor!");
    }
    else
    {
        sprintf(payload,"Humidity:%.2f  Temperature:%.2f'C",h,t);
    }
    Serial.println(payload);
}
void loop() {
    dhtloop();
        count++;

        if(hornbill.publish(TOPIC_NAME,payload) == 0)
        {      
        }
        else
        {
            Serial.println("Publish failed");
        }
    LEDBlink();
}
