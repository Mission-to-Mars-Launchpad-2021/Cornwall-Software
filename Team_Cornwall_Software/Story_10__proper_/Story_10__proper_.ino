
const int R_FORWARDS = 7;
const int R_REVERSE = 8;
const int R_ENGINE = 9;
const int L_ENGINE = 10;
const int L_FORWARDS = 11;
const int L_REVERSE = 12;

void setup() {
  
  pinMode(R_FORWARDS, OUTPUT);
  pinMode(R_REVERSE, OUTPUT);
  pinMode(R_ENGINE, OUTPUT);
  pinMode(L_ENGINE, OUTPUT);
  pinMode(L_FORWARDS, OUTPUT);
  pinMode(L_REVERSE, OUTPUT);  

}

void loop() {
  
  // 1
  drive(1750);
  brake(250);
  left(745);
  brake(250);
                   
  // 2
  drive(1750);
  brake(250);
  left(740);
  brake(250);
                     
  // 3
  drive(1750);
  brake(250);
  left(735);
  brake(250);
  
  // 4
  drive(1800);
  brake(250);
  left(730);
  brake(250);
  
  // Opposite 5 *******************
  // ******************************
  drive(1750);
  brake(250);
  right(870);
  brake(250);

  // 6
  drive(1750);
  brake(250);
  right(830);
  brake(250);
                    
  // 7
  drive(1750);
  brake(250);
  right(850);
  brake(250);
   
  // 8
  drive(1600);
  brake(250);
   
  // Reversed figure o' 8 ***************
  //*************************************

  // 1 second brake 
  brake(1750);
  
  // 9
  reverse(1750);                     
  brake(250);
  left(760);
  brake(250);
                   
  // 10
  reverse(1750);
  brake(250);
  left(740);
  brake(250);
                    
  // 11 
  reverse(1450);
  brake(250);
  left(750);
  brake(250);
                    
  // 12
  reverse(1650);
  brake(250);
  right(795);
  brake(250);
    
  // Opposite 13 *******************
  // ******************************

  
  reverse(1750);
  brake(250);
  right(830);
  brake(250);
                   
  // 14
  reverse(1750);
  brake(250);
  right(800);
  brake(250);
                    
  // 15
  reverse(1850);
  brake(250);
  right(850);
  brake(250);
                    
  // 16
  reverse(1700);
  brake(250);
 
  //Complete Stop                   
  digitalWrite(R_FORWARDS, LOW);   
  digitalWrite(L_REVERSE, LOW);          
  delay(1000000000);

}  
  void drive(int add_time){

  digitalWrite(R_FORWARDS, HIGH);   
  analogWrite(R_ENGINE, 220);
  analogWrite(L_ENGINE, 255);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(add_time);
  }

  void brake(int add_time){
    
  digitalWrite(R_FORWARDS, LOW);   
  digitalWrite(L_FORWARDS, LOW);   
  digitalWrite(R_REVERSE, LOW);   
  digitalWrite(L_REVERSE, LOW);       
  delay(add_time);
 }

  void left(int add_time){

  digitalWrite(R_FORWARDS, HIGH);   
  analogWrite(R_ENGINE, 255);
  analogWrite(L_ENGINE, 255);
  digitalWrite(L_REVERSE, HIGH);          
  delay(add_time);
 }
   
  void right(int add_time){
  
  digitalWrite(R_REVERSE, HIGH);   
  analogWrite(R_ENGINE, 255);
  analogWrite(L_ENGINE, 255);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(add_time);
 }

  void reverse(int add_time){
  
  digitalWrite(R_REVERSE, HIGH);   
  analogWrite(R_ENGINE,240);
  analogWrite(L_ENGINE, 255);
  digitalWrite(L_REVERSE, HIGH);          
  delay(add_time);
}
