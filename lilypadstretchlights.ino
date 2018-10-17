/*
Reads analog input and turns on 1, 2 or 3 leds depending on 
*/

int sensorPin1 = A1;
int sensorPin2 = A2;
int ledPin1 = 7;
int ledPin2 = 6;
int ledPin3 = 5;
int sensorValue1 = 0;
int sensorValue2 = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);  
  pinMode(ledPin2, OUTPUT);  
  pinMode(ledPin3, OUTPUT);  
  //pinMode(sensorPin1, INPUT_PULLUP); //turn on internal pull-up resistor
  //pinMode(sensorPin2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
 sensorValue1 = analogRead(sensorPin1);
 sensorValue2 = analogRead(sensorPin2);   
 Serial.println(sensorValue1); 
  if (sensorValue1 > 1000 && sensorValue2 > 990){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
  else if (sensorValue1 > 1000 && sensorValue2 < 990){
    //digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    //digitalWrite(ledPin3, HIGH);
  }
  else if (sensorValue1 < 1000 && sensorValue2 > 990){
    //digitalWrite(ledPin1, HIGH);
    //digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
  }
  else{
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
  
 
}
