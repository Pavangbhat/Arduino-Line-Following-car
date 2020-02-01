void setup() 
{
  
 //Serial.begin(9600);
  pinMode(2,INPUT);                // Initialize Pin 1 as Input Pin for IR Sensor 1

  pinMode(3,INPUT);                // Initialize Pin 2 as Input Pin for IR Sensor 2

  pinMode(8,OUTPUT);              // Initialize Pin 8 as Output Pin for Motor Output 2

  pinMode(9,OUTPUT);              // Initialize Pin 9 as Output Pin for Motor Output 2


  pinMode(10,OUTPUT);            // Initialize Pin 10 as Output Pin for Motor Output 1

  pinMode(11,OUTPUT);            // Initialize Pin 11 as Output Pin for Motor Output 1

 

}

void loop() 

{
  
  // Get the values from Pin 2 & 3 IR sensors
  int a = digitalRead(2);
  int b = digitalRead(3);         
  //Serial.println(b);
  if(a==1 && b==1)
{                                   // Forward Movement
    digitalWrite(8,HIGH);           // Pin 8 is High for Motor Output 2

    digitalWrite(9,LOW);            // Pin 9 is Low

    digitalWrite(10,HIGH);         // Pin 10 is High for Motor Output 1

    digitalWrite(11,LOW);          // Pin 11 is Low
}
   if(a==0){           // Right Movement

    digitalWrite(8,LOW);          // Pin 8 is Low

    digitalWrite(9,LOW);          // Pin 9 is Low
    
    digitalWrite(10,HIGH);       // Pin 10 is High for Motor Output 1

    digitalWrite(11,LOW);        // Pin 11 is Low

  }

 

    if(b==0)
 {                                  // Left Movement

    digitalWrite(8,HIGH);          // Pin 8 is High for Motor Output 2

    digitalWrite(9,LOW);           // Pin 9 is Low

    digitalWrite(10,LOW);         // Pin 10 is Low

    digitalWrite(11,LOW);         // Pin 11 is Low

  }

    if(a==0 && b==0)
   {                                // Stop

    digitalWrite(8,LOW);           // Pin 8 is Low

    digitalWrite(9,LOW);           // Pin 9 is Low

    digitalWrite(10,LOW);         // Pin 10 is Low

    digitalWrite(11,LOW);         // Pin 11 is Low

  }

 
}
