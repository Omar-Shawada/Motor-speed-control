void setup()
{
  pinMode(11, OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,INPUT);
  Serial.begin(9600);
}

void loop()
{
long dur;
long dis;

  
digitalWrite(4,LOW);
delayMicroseconds(2);
digitalWrite(4,HIGH);
delayMicroseconds(10);
digitalWrite(4,LOW);
dur=pulseIn(5,HIGH);
dis=(dur/2)*0.0343;
  
  
  if(dis<=200)
  {
    analogWrite(11,-dis);
    
  }
  else if(dis>200)
  {
    digitalWrite(11,LOW);
    
  }
  
}