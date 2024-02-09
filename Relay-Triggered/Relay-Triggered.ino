#include <LiquidCrystal.h>
void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  digitalWrite(6, LOW);
}

void loop()
{
  while( Serial.available() )
  {
    char data = Serial.read();
    Serial.println(data);
    if(data == '1'){
    Serial.println("1 reveiced");
      digitalWrite(6, LOW);
    }else if(data == '0'){
      Serial.println("0 reveiced");
      digitalWrite(6, HIGH);
    }
    
  }
}