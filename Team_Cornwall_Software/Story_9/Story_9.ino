
const int R_FORWARDS = 7;
const int R_REVERSE = 8;
const int R_ENGINE = 9;
const int L_ENGINE = 10;
const int L_FORWARDS = 11;
const int L_REVERSE = 12;

void setup() {
  
  pinMode(R_FORWARDS , OUTPUT);
  pinMode(R_REVERSE, OUTPUT);
  pinMode(R_ENGINE, OUTPUT);
  pinMode(L_ENGINE, OUTPUT);
  pinMode(L_FORWARDS, OUTPUT);
  pinMode(L_REVERSE, OUTPUT);  

}

void loop() {
  // 1
  /*
  drive(1750);
  
  brake(1000);
 
  left(900);
  
  brake(1000)
                   
  // 2
  
  drive(1750);
  
  brake(1000);
 
  left(900);
  
  brake(1000)
  
                     
  // 3
  
  drive(1750);
  
  brake(1000);
 
  left(900);
  
  brake(1000)
  // 4
  drive(1800);
  
  brake(1000);
 
  left(900);
  
  brake(1000)
  
  // Opposite 5 *******************
  // ******************************
  
  drive(1750);
  
  brake(1000);
  
  right(950);
 
  brake(1000);

  
  // 6
  
  drive(1750);

  brake(1000);
 
  right(925);

  brake(1000);
 
                     
  // 7
   drive(1750);

   brake(1000);

   right(935);

   brake(1000);
   
  // 8
   drive(1600);

   brake(1000);
   */
  // Reversed figure o' 8 ***************
  //*************************************

  // 9
  reverse(1750);
  brake(1000);
  right(950);
  brake(1000);
                   
  // 10
  reverse(1750);
  brake(1000);
  right(950);
  brake(1000);
                    
  // 11 
  reverse(1750);
  brake(1000);
  right(950);
  brake(1000);
                    
  // 12
  reverse(1750);
  brake(1000);
  right(950);
  brake(1000);
 
  // Opposite 13 *******************
  // ******************************
  
  reverse(1750);
  brake(1000);
  left(950);
  brake(1000);
                   
  // 14
  reverse(1750);
  brake(1000);
  left(950);
  brake(1000);
                    
  // 15
  reverse(1750);
  brake(1000);
  left(950);
   brake(1000);
                    
  // 16
  reverse(1750);
  brake(1000);
  left(950);
  brake(1000);
                     
  digitalWrite(R_FORWARDS, LOW);   
  digitalWrite(L_REVERSE, LOW);          
  delay(1000000000);

}  



 void drive(int add_time){

  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(add_time);
  
 }

 void brake(int add_time){
  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_FORWARDS, LOW);   
  digitalWrite(R_REVERSE, LOW);   
  digitalWrite(L_REVERSE, LOW);       
  delay(add_time);
 }

 void left(int add_time){

  
  digitalWrite(R_FORWARDS ,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_REVERSE,HIGH);          
  delay(add_time);
 }
   
 void right(int add_time){
  
  digitalWrite(R_REVERSE ,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS,HIGH);          
  delay(add_time);
}

void reverse(int add_time){
  
  digitalWrite(R_REVERSE , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_REVERSE, HIGH);          
  delay(add_time);
}
  
