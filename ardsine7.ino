void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  TCCR1A = _BV(WGM10) | _BV(COM1A1);
  TCCR1B = _BV(WGM12) | _BV(CS10);
  OCR1A = 39;  
}

void loop() {
  for(int i=0; i<128;i++)
  {
    analogWrite(A0, i);
    analogWrite(A1, i+128);
    analogWrite(A2, i);
    analogWrite(A3, i+128);
    delayMicroseconds(0.75);

  }

}
