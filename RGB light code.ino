int red=13,blue=12,green=11; 
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  xBlink();
}
void xBlink()
{
 digitalWrite(green,1); 
 digitalWrite(blue,1); 
 digitalWrite(red,1);
 delay(1000);
 digitalWrite(green,0); 
 digitalWrite(blue,0); 
 digitalWrite(red,0);
 delay(1000);
}