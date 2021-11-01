
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
  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(1750);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
 
 
  digitalWrite(R_FORWARDS ,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_REVERSE,HIGH);          
  delay(900);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_REVERSE, LOW);          
  delay(1000);
                   
  // 2
  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(1750);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
 
  digitalWrite(R_FORWARDS ,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_REVERSE,HIGH);          
  delay(900);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_REVERSE, LOW);          
  delay(1000);
 
                     
  // 3
  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(1750);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
 
  digitalWrite(R_FORWARDS ,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_REVERSE,HIGH);          
  delay(900);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_REVERSE, LOW);          
  delay(1000);
                    
  // 4
  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(1800);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
 
  digitalWrite(R_FORWARDS ,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_REVERSE,HIGH);          
  delay(900);
                     
  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_REVERSE, LOW);          
  delay(1000);
 
  // opposite 5 *******************
  // ******************************
  
  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(1750);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
 
 
  digitalWrite(R_REVERSE ,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS,HIGH);          
  delay(950);

  digitalWrite(R_REVERSE , LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
                   
  // 6
  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(1750);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
 
  digitalWrite(R_REVERSE ,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS,HIGH);          
  delay(925);

  digitalWrite(R_REVERSE, LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
 
                     
  // 7
  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(1750);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
 
  digitalWrite(R_REVERSE ,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS,HIGH);          
  delay(935);

  digitalWrite(R_REVERSE, LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);
                    
  // 8
  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(1600);

  digitalWrite(R_FORWARDS , LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(1000);

  digitalWrite(R_REVERSE,HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 180);
  digitalWrite(L_FORWARDS,HIGH);          
  delay(950);
                     
  digitalWrite(R_REVERSE, LOW);   
  digitalWrite(L_FORWARDS, LOW);          
  delay(100000000);

                     



                     



                     



                     
 }  
