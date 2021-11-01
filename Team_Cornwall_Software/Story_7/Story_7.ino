
const int R_FORWARDS = 7;
const int R_REVERSE = 8;
const int R_ENGINE = 9;
const int L_ENGINE = 10;
const int L_FORWARDS = 11;
const int L_REVERSE = 12;
const int LEFT_FEEDBACK = 2;
const int RIGHT_FEEDBACK = 3;

volatile int leftcounter = 0; //initiate counter to zero for start
volatile int rightcounter = 0;

void setup() {
  
  pinMode(R_FORWARDS , OUTPUT);
  pinMode(R_REVERSE, OUTPUT);
  pinMode(R_ENGINE, OUTPUT);
  pinMode(L_ENGINE, OUTPUT);
  pinMode(L_FORWARDS, OUTPUT);
  pinMode(L_REVERSE, OUTPUT); 

   Serial.begin(115200);
   attachInterrupt(digitalPinToInterrupt(LEFT_FEEDBACK),LeftMotorISR,RISING);
   attachInterrupt(digitalPinToInterrupt(RIGHT_FEEDBACK),RightMotorISR,RISING);
}

void loop() {

  //just print out the values to show counter operating
  Serial.print("Left Counter ");
  Serial.println(leftcounter);

  Serial.print("Right Counter ");
  Serial.println(rightcounter);
    
  // Rover moves forward for 10 seconds
  digitalWrite(R_FORWARDS , HIGH);   
  analogWrite(R_ENGINE, 180);
  analogWrite(L_ENGINE, 185);
  digitalWrite(L_FORWARDS, HIGH);          
  // delay(15000);

  if(leftcounter>905)
  {//Rover stops after 870 revolutions
  digitalWrite(R_FORWARDS , LOW); 
  digitalWrite(R_ENGINE, LOW); 
  digitalWrite(L_ENGINE, LOW); 
  digitalWrite(L_FORWARDS, LOW); 
  delay(1000000);}
                     
}

void LeftMotorISR(){
//adds onte to the counter on each motor revolution
leftcounter++;
}

void RightMotorISR(){
//adds onte to the counter on each motor revolution
rightcounter++;
}
