boolean r;
char state = 'a';


#include <Keypad.h>
int i = 0;
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {14, 15, 16, 17}; //connect to row pinouts
byte colPins[COLS] = {18, 19, 20, 21}; //connect to column pinouts
//int countdownPins[11] = {22,23,24,25,26,27,28,29,30,31,32};
int countdown[11] = {32,30,28,26, 24, 22,23,25,27,29,31};
int counter;
//1 - 6
//2 - 7
//3 - 5
//4 - 8
//5 - 4
//6 - 9
//7 - 3
//8 - 10
//9 - 2
//10- 11
//11- 1
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  //   put your setup code here, to run once:
  Serial.begin(9600);
  //  Serial.println("Hello to you too");
  pinMode(6, INPUT);
  analogWrite(3, 100);
  r = false;
  counter = 10;
}
char input[2];
char secondInput[2];

void loop() {

  char key = keypad.getKey();

  if (key != NO_KEY) {
    Serial.println(key);

    if (key == 'A') {
//      turnOff();
      for ( i = 33; i < 54; i += 2) {
        digitalWrite(i, HIGH);
        analogWrite(i, 255);
        delay(50);
      }
      counter = 10;
      turnOffRed();
    }
    else if (key == 'B') {
      turnOff();

      for ( i = 22; i <= 32; i++) {
        digitalWrite(i, HIGH);
        analogWrite(i, 255);
        delay(50);
      }
      

    }
    else if (key == 'C') {
      turnOff();
      for ( i = 34; i <= 52; i += 2) {
        digitalWrite(i, HIGH);
        analogWrite(i, 255);
        delay(50);

      }
      analogWrite(8, 255);


    }
    else if (key == 'D') {



      for ( i = 53; i >= 32; i -= 2) {
        if (digitalRead(i) == HIGH) {
          //          Serial.println(i + " is " + digitalRead(i));
          digitalWrite(i, LOW);

          analogWrite(countdown[counter],255);
          if(counter!=0){
          counter--;
          
          
          }
          



          //
          //for ( i = 22; i <= 32; i++) {
          //        digitalWrite(i, HIGH);
          //        analogWrite(i, 255);
          //        delay(50);
          //      }


          i = 31;
        }
        //        digitalWrite(i, LOW);
        //        analogWrite(i, 255);
        //        delay(50);
      }

    }


  }



  //            Serial.println(analogRead(6));
  if (analogRead(6) > 500 || r ) {


    //        Serial.println("State: ");
    //        Serial.print(state);
    //        Serial.println();

    // put your main code here, to run repeatedly:

    //       green
    for ( i = 33; i < 54; i += 2) {
      digitalWrite(i, HIGH);
      analogWrite(i, 255);
      delay(50);
    }

    delay(50);
    for ( i = 33; i < 54; i += 2) {
      digitalWrite(i, LOW);
      analogWrite(i, 0);
      delay(50);

    }
    delay(50);

    //     red
    for ( i = 22; i <= 32; i++) {
      digitalWrite(i, HIGH);
      analogWrite(i, 255);
      delay(50);
    }



    delay(50);
    for ( i = 22; i <= 32; i++) {
      digitalWrite(i, LOW);
      analogWrite(i, 0);
      delay(50);
    }
    delay(50);
    //   blue
    for ( i = 34; i <= 52; i += 2) {
      digitalWrite(i, HIGH);
      analogWrite(i, 255);
      delay(50);
    }
    analogWrite(8, 255);

    //        delay(50);
    for ( i = 34; i <= 52; i += 2) {
      digitalWrite(i, LOW);
      analogWrite(i, 0);
      delay(50);

    }

    analogWrite(8, 0);
    delay(50);
    r = false;
  }
}

void turnOff() {
  //green

  for ( i = 33; i < 54; i += 2) {
    digitalWrite(i, LOW);
    analogWrite(i, 0);
    //      delay(50);
  }
  //red
  for ( i = 22; i <= 32; i++) {
    digitalWrite(i, LOW);
    analogWrite(i, 0);
    //      delay(50);
  }
  //blue
  for ( i = 34; i <= 52; i += 2) {
    digitalWrite(i, LOW);
    analogWrite(i, 0);
    //      delay(50);

  }
  analogWrite(8, 0);



}
void turnOffRed(){

  //red
  for ( i = 22; i <= 32; i++) {
    digitalWrite(i, LOW);
    analogWrite(i, 0);
    //      delay(50);
  }
}






