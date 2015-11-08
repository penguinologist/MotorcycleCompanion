int DO = A0; //Pin for Digital Output - DO
int DA = A2; // Pin for Analog Output - AO
int threshold = 52; //Set minimum threshold for LED lit
int sensorvalue = 0;

void setup() {
 Serial.begin(9600);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
//  pinMode(30, OUTPUT);
//  pinMode(31, OUTPUT);
//  pinMode(32, OUTPUT);
//  pinMode(33, OUTPUT);
//  pinMode(34, OUTPUT);
//  pinMode(35, OUTPUT);
//  pinMode(36, OUTPUT);
//  pinMode(37, OUTPUT);
//  pinMode(38, OUTPUT);
//  pinMode(39, OUTPUT);
//  pinMode(40, OUTPUT);
//  pinMode(41, OUTPUT);

}

void loop() {
  int i = 0;

 sensorvalue = analogRead(DA);  //Read the analog value
  Serial.print("Analog: ");
  Serial.print(sensorvalue);  //Print the analog value
  Serial.print("  ");
  Serial.print("Digital: ");
  Serial.println(digitalRead(DO));  //Print the digital value
 
  if (sensorvalue >= threshold) { //Compare analog value with threshold
  digitalWrite(22, HIGH);
  digitalWrite(23, HIGH);
   digitalWrite(24, HIGH);
   digitalWrite(25, HIGH);
   digitalWrite(26, HIGH);
   digitalWrite(27, HIGH);
   digitalWrite(28, HIGH);
   digitalWrite(29, HIGH);
   digitalWrite(30, HIGH);
   digitalWrite(31, HIGH);
   digitalWrite(32, HIGH);
   digitalWrite(33, HIGH);
   digitalWrite(34, HIGH);
   digitalWrite(35, HIGH);
   digitalWrite(36, HIGH);
   digitalWrite(37, HIGH);
   digitalWrite(38, HIGH);
   digitalWrite(39, HIGH);
   digitalWrite(40, HIGH);
   digitalWrite(41, HIGH);
 
  }
  else {
    
    digitalWrite(22, LOW);
    digitalWrite(23, LOW);
    digitalWrite(24, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(28, LOW);
    digitalWrite(29, LOW);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(40, LOW);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
  }



//int i = 0;
//
//for(i = 22; i <= 41; i++){
//  analogWrite(i , 255);
// delay(70);
//}
//
//for(i = 22; i <= 41; i++){
//  analogWrite(i , 0);
// delay(70);
//}


}
  

