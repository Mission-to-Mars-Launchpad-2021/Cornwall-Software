


 // Intergers
 
 const int R_FORWARDS = 7;
 const int R_REVERSE = 8;
 const int R_ENGINE = 9;
 const int L_ENGINE = 10;
 const int L_FORWARDS = 11;
 const int L_REVERSE = 12;

 int sensorPin = A2;    
 
 int bright_light = 1023;                                                                                                                                             
 int new_light = 0; 
 
  //Output setups 

 void setup() {
  Serial.begin(115200); 
  

  pinMode(R_FORWARDS, OUTPUT);
  pinMode(R_REVERSE, OUTPUT);
  pinMode(R_ENGINE, OUTPUT);
  pinMode(L_ENGINE, OUTPUT);
  pinMode(L_FORWARDS, OUTPUT);
  pinMode(L_REVERSE, OUTPUT);  
}


// bright_light AND new_light are both 1023


 void loop() {

  while(millis()<4000){
  
    new_light = analogRead(sensorPin);  // new value new_light, now NOT 1023. Light intensity has been measured
    delay(1000);
    Serial.print("New_light =");        // Print word "New_Light"
    Serial.println(new_light);          // Print value of new_light which is 1023
    Serial.print("Bright_light=");      // Print word "Bright_Light"
    Serial.println(bright_light);       // Print value of bright_light which is 1023
    Serial.print("Millis=");      
    Serial.println(millis()); 
    
    Serial.println("Turnintg Left");
    left(0);                             // Turn Left
    
                  // If the new_light is brighter than the bright_light original value, 
                  // replace it with new_light value
    
    if(new_light < bright_light){         
      bright_light = new_light;
      }
    
  }

  
Serial.println("Braking");
   //brake(250);
   Serial.println(" 2NDTurning Left");
   left(0);
    new_light = analogRead(sensorPin);
    Serial.print("New_light =");        // Print word "New_Light"
    Serial.println(new_light);          // Print value of new_light which is 1023
    Serial.print("Bright_light=");      // Print word "Bright_Light"
    Serial.println(bright_light);       // Print value of bright_light which is 1023
 
  if(bright_light - 2 < new_light || bright_light + 2 < new_light){
    Serial.println("Braking");
    brake(1000);
    Serial.println("Driving");
    drive(10000);
    Serial.println("Braking");
    brake(100000000);
    
  }
 }
 
  // Functions

 void drive(int add_time){

  digitalWrite(R_FORWARDS, HIGH);   
  analogWrite(R_ENGINE, 235);
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
   
 void reverse(int add_time){
  
  digitalWrite(R_REVERSE, HIGH);   
  analogWrite(R_ENGINE,240);
  analogWrite(L_ENGINE, 255);
  digitalWrite(L_REVERSE, HIGH);          
  delay(add_time);
}
