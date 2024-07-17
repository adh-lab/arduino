const int x=12;
const int y=4;
int state=0;
void setup() {
  // put your setup code here, to run once:
pinMode(x,OUTPUT);
pinMODE(y,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
state=digitalRead(y);
if(state==HIGH)
{
  digitalWrite(x=HIGH);
}
else
{
  digitalWrite(x=LOW);
}
}
