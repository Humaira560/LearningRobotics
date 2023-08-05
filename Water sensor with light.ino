int sensor=A0;
int red=7,blue=6,green=5;
void setup()
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  int moisture=analogRead(sensor);
  Serial.println(moisture);
  if (moisture>=0 && moisture<=300){
    Red();
  }
  
   if (moisture>300 && moisture<=600){
    Blue();
  }
    if (moisture>600){
    Green();
  }
    
}

void Red(){
digitalWrite(red,1);
digitalWrite(blue,0);
digitalWrite(green,0);
}

void Blue(){
digitalWrite(red,0);
digitalWrite(blue,1);
digitalWrite(green,0);
}

void Green(){
digitalWrite(red,0);
digitalWrite(blue,0);
digitalWrite(green,1);
}