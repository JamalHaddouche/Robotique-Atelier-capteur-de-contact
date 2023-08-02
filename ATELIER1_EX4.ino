bool capteur1,capteur2;
void setup() {
  pinMode (7, INPUT);
    pinMode (2, INPUT);

//Setup Channel A
pinMode(12, OUTPUT); //Initiates Motor Channel A pin
pinMode(13, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);//Initiates Brake Channel A pin
}
void loop(){
  capteur1 = digitalRead(2),capteur2=digitalRead(7);
 //backward
  if (capteur1 && capteur2){
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    analogWrite(3, 123);
    analogWrite(11, 123);
  }
  
  //ROTATION
  else if (capteur2 == HIGH) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    analogWrite(3, 255);
    analogWrite(11, 255);
  }
  
  //ROTATION
  else if  (capteur1 == HIGH) {
  
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    analogWrite(3, 255);
    analogWrite(11, 255);
  
  }
 //FORWARD
  else {
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    analogWrite(3, 123);
    analogWrite(11, 123);
  }

}
 
