int speed = 0;
void setup()
{
  pinMode(2, INPUT);
  for(int i=4; i<12; i++)
  {
    pinMode(i, OUTPUT);
  }
}
void LEDs_off()
{
  for(int i=4; i<12; i++)
  {
    digitalWrite(i, LOW);
  }
}
void loop()
{
  speed = 1000;
  if(digitalRead(2)==HIGH){
    for(int i=11; i>3; i--){
    LEDs_off();
    digitalWrite(i, HIGH);
    delay(speed);
   }
  }
  else{
    for(int i=11; i>3; i--){
    LEDs_off();
    digitalWrite(i, LOW);
   }
  }
}