// Lini Mestar
// Controlling DC motor

unsigned motorPin1 = 10;
unsigned motorPin2 = 11;
unsigned ledPin1 = 2;
unsigned ledPin2 = 4;

void setup(){
 setAsOutput(motorPin1);
 setAsOutput(motorPin2);
 setAsOutput(ledPin1);
 setAsOutput(ledPin2);
 Serial.begin(9600);
 Serial.println("Setup is done!");  //testing
}

void loop(){ 
   fullRotateRight(2000);
   delay(1500);
   fullRotateLeft(2000);
}
void setAsOutput( unsigned pin ){
  pinMode(pin, OUTPUT); 
}
void fullRotateRight( unsigned howLong ){
  ledLight(ledPin2);
  digitalWrite(motorPin2,HIGH);
  digitalWrite(motorPin1,LOW);
  delay(howLong);
  digitalWrite(motorPin2,LOW);
}  //fullRotateRight

void fullRotateLeft( unsigned howlong ){
 ledLight(ledPin1);
 digitalWrite(motorPin2,LOW);
 digitalWrite(motorPin1,HIGH);
 delay(howlong);
 digitalWrite(motorPin1,LOW);
}  //fullRotateLeft

void ledLight( unsigned lightPin ){
 digitalWrite(lightPin, HIGH);
 delay(800);
 digitalWrite(lightPin, LOW); 
}


 
 
