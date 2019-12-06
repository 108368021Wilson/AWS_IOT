#include <AWS_IOT.h>
#include <WiFi.h>
#include "DHT.h"
#define LED 2
#define WATER 4
#define DHTPIN 16 
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
AWS_IOT hornbill;

char WIFI_SSID[]="Mobile";
char WIFI_PASSWORD[]="Crimping@@2020";
char HOST_ADDRESS[]="a1o7su4fl8ai2f.ats.iot.cn-north-1.amazonaws.com.cn";
char CLIENT_ID[]= "basicPubSub";
char TOPIC_NAME1[]= "108368021WATER";
char TOPIC_NAME2[]= "108368021DHT";

int status = WL_IDLE_STATUS;
int tick=0,msgCount=0,msgReceived = 0;
char payload[512];
char rcvdPayload[512];

void mySubCallBackHandler (char *topicName, int payloadLen, char *payLoad)
{
    strncpy(rcvdPayload,payLoad,payloadLen);
    rcvdPayload[payloadLen] = 0;
    msgReceived = 1;
}

void setup() 
{
    Serial.begin(115200);
    delay(2000);

    pinMode(WATER,OUTPUT);
    digitalWrite(WATER,LOW);
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
        if(0==hornbill.subscribe(TOPIC_NAME1,mySubCallBackHandler))
        {
            Serial.println("Subscribe Successful");
        }
        else
        {
            Serial.println("Subscribe Failed, Check the Thing Name and Certificates");
            while(1);
        }
    }
    else
    {
        Serial.println("AWS connection failed, Check the HOST Address");
        while(1);
    }
    delay(2000);
    dht.begin();
}

void loop()
{   
    float h = dht.readHumidity();
    float t = dht.readTemperature();
    if (isnan(h) || isnan(t))
    {
        Serial.println("Failed to read from DHT sensor!");
    }
    else
    {
        sprintf(payload,"Humidity:%.2f  Temperature:%.2f'C",h,t);
        Serial.println(payload);
        delay(1000);
    }
    

    if(hornbill.publish(TOPIC_NAME2,payload) == 0)
    {  
    }
    else
    {
        Serial.println("Publish failed");
    }
        
    if(msgReceived == 1)
    {   
        msgReceived = 0;
        Serial.print("Received Message:");
        Serial.println(rcvdPayload);
        digitalWrite(WATER,HIGH);
        delay(5000);
        digitalWrite(WATER,LOW);
     
    }
    vTaskDelay(1000 / portTICK_RATE_MS);   
}     
