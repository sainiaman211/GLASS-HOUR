int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 0;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int led12 = 12;
int led13 = 13;



void setup() {
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led2, HIGH);// upper all leds ON 
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  
  delay(3000);
  
  digitalWrite(led6, LOW);//case 1
  delay(3000);
  
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led7, HIGH);
  delay(80);
  digitalWrite(led13, HIGH);
    delay(80);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led7, LOW);
  delay(80);
   digitalWrite(led13, LOW);
    delay(80);
  
  digitalWrite(led12, HIGH);
  delay(3500);
  
  

  digitalWrite(led5, LOW);     //case 2                                                                                                                                                                                                                                                                                                                                                                                                                    digitalWrite(led12, HIGH);
  delay(3000);
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led7, HIGH);
  delay(80);
  digitalWrite(led13, HIGH);
    delay(80);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led7, LOW);
  delay(80);
   digitalWrite(led13, LOW);
    delay(80);

  digitalWrite(led11, HIGH);
  delay(3500);
  
  
  

  digitalWrite(led4, LOW);    //case 3                                                                                                                                                                                                                                                                                                                                                                                                                     digitalWrite(led12, HIGH);
  delay(3000);

  
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led7, HIGH);
  delay(80);
  digitalWrite(led13, HIGH);
    delay(80);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led7, LOW);
  delay(80);
   digitalWrite(led13, LOW);
    delay(80);
  

  digitalWrite(led10, HIGH);
  delay(3500);
  
  digitalWrite(led3, LOW);    //case 4                                                                                                                                                                                                                                                                                                                                                                                                                    digitalWrite(led12, HIGH);
  delay(3000);
  
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led7, HIGH);
  delay(80);
  digitalWrite(led13, HIGH);
    delay(80);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led7, LOW);
  delay(80);
   digitalWrite(led13, LOW);
    delay(80);
  
  digitalWrite(led8, HIGH);
  delay(3500);

  digitalWrite(led2, LOW);    //case 5                                                                                                                                                                                                                                                                                                                                                                                                                    digitalWrite(led12, HIGH);
  delay(3000);
  
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led7, HIGH);
  delay(80);
  digitalWrite(led13, HIGH);
    delay(80);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led7, LOW);
  delay(80);
   digitalWrite(led13, LOW);
    delay(80);
  digitalWrite(led9, HIGH);
  delay(3500);
  
  digitalWrite(led9, LOW);// bottom all leds off
  digitalWrite(led8, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  delay(3000);




}
