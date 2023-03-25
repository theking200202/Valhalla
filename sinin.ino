 
 void setup(){
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);

 }

 void loop(){
  noInterrupts();           
  TCCR1A = bit (WGM10) | bit (WGM11) | bit (COM1B1); // fast PWM, clear OC1B on compare
  TCCR1B = bit (WGM12) | bit (WGM13) | bit (CS10);   // fast PWM, no prescaler
  OCR1A =  (F_CPU / 40000L) - 1;
  OCR1B = (F_CPU / 40000L) / 2;
  interrupts();
  
  }
