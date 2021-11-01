
 // extract from example 

  #include <NewPing.h>

  #define TRIGGER_PIN  13  
  #define ECHO_PIN     17  
  #define MAX_DISTANCE 200 

  NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

 const int R_FORWARDS = 7;
 const int R_REVERSE = 8;
 const int R_ENGINE = 9;
 const int L_ENGINE = 10;
 const int L_FORWARDS = 11;
 const int L_REVERSE = 12;



 void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.

  sonar.ping_cm();

  pinMode(R_FORWARDS, OUTPUT);
  pinMode(R_REVERSE, OUTPUT);
  pinMode(R_ENGINE, OUTPUT);
  pinMode(L_ENGINE, OUTPUT);
  pinMode(L_FORWARDS, OUTPUT);
  pinMode(L_REVERSE, OUTPUT);  
}

 void loop() {
  if (sonar.ping_cm()>=6){
  Serial.print("No object found ");
  drive();
}

  drive(); 

  if (sonar.ping_cm()<6){
  Serial.print("Object Found");
  
  brake(500);
  reverse(500);
  brake(100000000);
}
  delay(50);                     
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); 
  Serial.println("cm");
}

 void drive(){

  digitalWrite(R_FORWARDS, HIGH);   
  analogWrite(R_ENGINE, 220);
  analogWrite(L_ENGINE, 255);
  digitalWrite(L_FORWARDS, HIGH);    
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
   
 void reverse(int add_time){
  
  digitalWrite(R_REVERSE, HIGH);   
  analogWrite(R_ENGINE,240);
  analogWrite(L_ENGINE, 255);
  digitalWrite(L_REVERSE, HIGH);          
  delay(add_time);
}
