String  swit;
void setup() {
  pinMode(2,OUTPUT);
  //pinMode(A1,INPUT);
  Serial.begin(9600);
  
}
void loop(){
  if (Serial.available()>0)
  {
    
    swit = Serial.readString();
  }
  if (swit == "on" || swit == "ON" || swit == "On")
  {
    digitalWrite(2,HIGH);
    Serial.println("The LED is ON");
  }
  else
  {
    digitalWrite(2,LOW);
    Serial.println("The LED is OFF");
  }
}
