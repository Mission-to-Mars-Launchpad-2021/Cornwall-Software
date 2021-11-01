
 // extract from example, defines the down-facing sensor

  #include <NewPing.h>

  #define TRIGGER_PIN  13  
  #define ECHO_PIN     17  
  #define MAX_DISTANCE 200 
  
  // NewPing setup of pins and maximum distance.
  NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 
  
  //Sets up constants for the rover's movements
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

  //If the down-facing sensor detects something (the floor), the rover drives forwards
  void loop() {
 
  Serial.println("object found ");                  
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); 
  Serial.println("cm");
  Serial.println("Driving ");
  drive(3500);
  Serial.println("Braking ");
  brake(500);
  


  //If the sensor detects something more than 12cm away, the rover stops, reverses and stops again
  do{
    slowdrive(0);
    Serial.println("Slow drive");
  }
  while (sonar.ping_cm() <= 15);{
    delay(50);
    Serial.print("Ping: ");
    Serial.print(sonar.ping_cm()); 
    Serial.println("cm");
  };
    slowdrive(400);
    
 // Serial.println(" no Object Found");
  //Serial.print("Ping: ");
  //Serial.print(sonar.ping_cm()); 
  //Serial.println("cm");
  Serial.println("Braking ");
  brake(5000);
  Serial.println("Reversing ");
  reverse(2000);
  Serial.println("Stopped ");
  brake(1000);
  exit(0);
}

 void drive(int add_time){

  digitalWrite(R_FORWARDS, HIGH);   
  analogWrite(R_ENGINE, 255);
  analogWrite(L_ENGINE, 255);
  digitalWrite(L_FORWARDS, HIGH);   
  delay(add_time);
  }

  void slowdrive(int add_time){

  digitalWrite(R_FORWARDS, HIGH);   
  analogWrite(R_ENGINE, 55);
  analogWrite(L_ENGINE, 55);
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
   
 void reverse(int add_time){
  
  digitalWrite(R_REVERSE, HIGH);   
  analogWrite(R_ENGINE,240);
  analogWrite(L_ENGINE, 255);
  digitalWrite(L_REVERSE, HIGH);          
  delay(add_time);
}
