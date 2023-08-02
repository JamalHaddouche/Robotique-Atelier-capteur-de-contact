bool capteur1;
void setup() {
  pinMode (7, INPUT);

//Setup Channel A
pinMode(12, OUTPUT); //Initiates Motor Channel A pin
}
void loop(){
capteur1 = digitalRead(7);
//backward 
if (capteur1){
digitalWrite(12, LOW);
analogWrite(3, 123);
}

else {
digitalWrite(12, HIGH);//Establishes forward direction of Channel A
digitalWrite(9, LOW);//Disengage the Brake for Channel A
analogWrite(3, 123);
}

}
 
