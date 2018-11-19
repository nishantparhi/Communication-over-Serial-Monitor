int swit = 0;
void setup() {
  pinMode(2,OUTPUT);
  //pinMode(A1,INPUT);
  Serial.begin(9600);
  
}
void loop(){
  if (Serial.available()>0)
  {
    swit = Serial.read();
  }
  Serial.println(swit);
  if (swit ==49)
  {
    digitalWrite(2, HIGH);
  }
  else 
  {
    digitalWrite(2, LOW);
  }
}
