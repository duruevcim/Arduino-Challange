int led = 10;
int photocell = A0;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(photocell,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(photocell);
  
  if(value>=900){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }
  
  Serial.println(value);
  
  delay(1);
}