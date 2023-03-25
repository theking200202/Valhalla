float t;

void setup() {
 
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  t = 1/40000;
  analogWrite(A0,HIGH);
  analogWrite(A1,LOW);
  delay(t/2);
  analogWrite(A2,HIGH);
  analogWrite(A3,LOW);

}
