int ledPin = 13;                

void setup()                   
{
  pinMode(ledPin, OUTPUT);      
  Serial.begin(9600);     // инициализация работы с COM-портом
}

void loop()                     
{
  digitalWrite(ledPin, HIGH);   
  Serial.print("H");      // светодиод горит – пишем H
  delay(1000);                  
  digitalWrite(ledPin, LOW);    
  Serial.println("L");    // светодиод погасили – пишем L
  delay(1000);                  
}

