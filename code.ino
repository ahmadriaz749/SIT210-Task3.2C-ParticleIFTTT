
int led2 = D7; 

int photoresistor = A0;
int analogValue;
String light = "";


void setup() {


  pinMode(led2, OUTPUT);
  pinMode(photoresistor, INPUT);
  Particle.variable("light", light);

}


void loop() {
 
analogValue = analogRead(photoresistor);
light = String(analogValue);
Particle.publish("light", light, PRIVATE);

delay(10000);

 
}