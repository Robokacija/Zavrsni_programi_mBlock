/*
Arduino Turn LED On/Off using Serial Commands
Created April 22, 2015
Hammad Tariq, Incubator (Pakistan)

It's a simple sketch which waits for a character on serial
and in case of a desirable character, it turns an LED on/off.

Possible string values:
a (to turn the LED on)
b (tor turn the LED off)
*/

char junk;
String inputString="";
int p1 = 8;
int p2 = 9;
int p3 = 10;
int p4 = 11;

void setup()                    // run once, when the sketch starts
{
 Serial.begin(38400);            
 pinMode(13, OUTPUT);
 pinMode(p4, OUTPUT);
 pinMode(p3, OUTPUT);
 pinMode(p2, OUTPUT);
 pinMode(p1, OUTPUT);
}

void loop()
{
  if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }      // clear the serial buffer
    if(inputString == "1"){         //in case of 'a' turn the LED on
      digitalWrite(13, HIGH);
      digitalWrite(p1,1);
      digitalWrite(p2,0);
      digitalWrite(p3,1);
      digitalWrite(p4,0); 
      
    }else if(inputString == "7"){   //incase of 'b' turn the LED off
      digitalWrite(13, LOW);
      digitalWrite(p1,0);
      digitalWrite(p2,1);
      digitalWrite(p3,0);
      digitalWrite(p4,1);
      
    }
    else if(inputString == "5"){
      digitalWrite(p1,0);
      analogWrite(p2,255);
      digitalWrite(p3,1);
      analogWrite(p4,0);
      
    }
    else if(inputString == "3"){
      digitalWrite(p1,1);
      analogWrite(p2,0);
      digitalWrite(p3,0);
      analogWrite(p4,255);
      
    }
    else if(inputString ==  "2" || inputString == "4" || inputString == "6" || inputString == "8"){
      digitalWrite(p1,0);
      digitalWrite(p2,0);
      digitalWrite(p3,0);
      digitalWrite(p4,0);
      
    }
    inputString = "";
  }
}