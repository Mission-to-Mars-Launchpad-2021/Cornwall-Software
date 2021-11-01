
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
  // Rover moves forward for 10 seconds
  digitalWrite(R_FORWARDS , HIGH);   
  digitalWrite(R_ENGINE, HIGH);
  digitalWrite(L_ENGINE, HIGH);
  digitalWrite(L_FORWARDS, HIGH);          
  delay(10000);                       

  // Rover stops for 1 second
  digitalWrite(R_FORWARDS , LOW); 
  digitalWrite(R_ENGINE, LOW); 
  digitalWrite(L_ENGINE, LOW); 
  digitalWrite(L_FORWARDS, LOW); 
  delay(1000);

  // Rover reverses for 1 second
  digitalWrite(R_REVERSE, HIGH) ; 
  digitalWrite(R_ENGINE, HIGH); 
  digitalWrite(L_ENGINE, HIGH); 
  digitalWrite(L_REVERSE, HIGH); 
  delay(1000);

  // Rover stops for 1 second
  digitalWrite(R_REVERSE, LOW); 
  digitalWrite(R_ENGINE, LOW); 
  digitalWrite(L_ENGINE, LOW); 
  digitalWrite(L_REVERSE, LOW); 
  delay(1000);
  }
