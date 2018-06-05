#include <Wire.h>
#include <Adafruit_ADS1015.h>

Adafruit_ADS1115 ads(0x48);
float Voltage = 0.0;

void setup(void) 
{
  Serial.begin(115200);  
  ads.begin();
}

void loop(void) 
{
  int16_t adc0;  // we read from the ADC, we have a sixteen bit integer as a result

  adc0 = ads.readADC_SingleEnded(1);
  
  Serial.print("\tDeger: ");
  Serial.println(adc0);  
  Serial.println();
  
  delay(1000);
}

