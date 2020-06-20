#include<Keypad.h>


const byte ROWS=3;
const byte COLS=3;
char keys[ROWS][COLS]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}
};
  byte rowPins[ROWS]={7,6,5};
  byte colPins[COLS]={3,2,4};
Keypad keypad = Keypad( makeKeymap(keys),rowPins,colPins,ROWS,COLS);
void setup()
{
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.println("good!");
}
//规定//
void loop()
{
  char key=keypad.getKey();
  if(key!=NO_KEY)
  {
    switch(key)
    {
       case'1':   digitalWrite(8,HIGH);
                  digitalWrite(9,LOW);
                  digitalWrite(10,HIGH);
                  digitalWrite(11,LOW);
             break;
       case'2':   digitalWrite(9,HIGH);
                  digitalWrite(8,LOW);
                  digitalWrite(11,HIGH);
                  digitalWrite(10,LOW);
             break;
       case'3':   digitalWrite(9,HIGH);
                  digitalWrite(8,LOW);
                  digitalWrite(10,HIGH);
                  digitalWrite(11,LOW);
             break;
       case'4':   digitalWrite(8,HIGH);
                  digitalWrite(9,LOW);
                  digitalWrite(11,HIGH);
                  digitalWrite(10,LOW);
             break;
       default:
             break;
    }
    Serial.println(key);
  }
  else
  {
             digitalWrite(8,LOW);
             digitalWrite(9,LOW);
             digitalWrite(11,LOW);
             digitalWrite(10,LOW);
  }
}
  