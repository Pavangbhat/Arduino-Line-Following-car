void setup() 
{
 Serial.begin(9500);
  pinMode(2,INPUT);                
  pinMode(3,INPUT);               
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}
void loop() 
{
  int a = digitalRead(2);
  int b = digitalRead(3);         
  //Serial.println(b);
  Serial.println(a);
  
  if(a==0 && b==0){                             // Forward Movement
    analogWrite(9,50);           
    analogWrite(10,0);            
    analogWrite(11,50);        
    analogWrite(12,0);          
  }
  
   if(a==1){                                   // Right Movement
    analogWrite(9,0);          
    analogWrite(10,0);          
    analogWrite(11,50);       
    analogWrite(12,0);        
  }
    if(b==1){                                  // Left Movement
    analogWrite(9,50);       
    analogWrite(10,0);        
    analogWrite(11,0);         
    analogWrite(12,0);        
  }
  if(a==1 && b==1){
    analogWrite(9,0);       
    analogWrite(10,0);        
    analogWrite(11,0);         
    analogWrite(12,0); 
    
  }
}
