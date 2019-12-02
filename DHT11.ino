#include "DHT.h"
#define DHTPIN 16 
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
char payload[512];

void setup() {
    Serial.begin(115200);
    dht.begin();
}

void loop() {
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
    delay(1000);
}
