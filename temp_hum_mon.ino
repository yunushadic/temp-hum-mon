
//Kodlar Yunus HADİÇ tarafından yazılmıştır.Tüm hakları saklıdır. 



#include "DHT.h"

#define DHTPIN 3     

#define DHTTYPE DHT11   // DHT 11


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  

  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  
 


  Serial.print(F("Nem : % "));
  Serial.print(h);
  Serial.print(F(" Sıcaklık : "));
  Serial.print(t);
  Serial.println(F("°C "));



  
}
