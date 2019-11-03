void setup() 
{
  pinMode(2,INPUT);
  pinMode(7,OUTPUT);

}

void loop() 
{
  int reading=digitalRead(2);
  if(reading==HIGH)
  {
    digitalWrite(7,HIGH);  
  }
  else
  {
    digitalWrite(7,LOW);
  }

}
