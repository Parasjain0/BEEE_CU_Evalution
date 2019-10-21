void setup()
{
  pinMode(2, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ 
  if(digitalRead(12)==LOW)
  {
    Serial.println("HIGH");
  digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    delay(500);
  }
  else
  {
    Serial.println("LOW");
  digitalWrite(13, HIGH);
    delay(250);
    digitalWrite(13,LOW);
    delay(250);
  }
  
}