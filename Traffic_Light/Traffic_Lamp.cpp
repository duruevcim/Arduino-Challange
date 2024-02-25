// C++ code
//
int stop = 0;

int sto = 0;

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(5, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(3, LOW);
  analogWrite(5, stop);
}
