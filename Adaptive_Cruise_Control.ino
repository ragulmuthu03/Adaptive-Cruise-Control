//const int pingPin = 7;
const int trigPin = 8;
const int echoPin = 9;
const int irPin = 6;
const int BuzzerPin = 7;
const int ina = 5;
const int inb = 4;
const int ena = 3;
const int rl = 10;
const int gl = 11;

int cm, inches, distance;
long duration;

void setup() 
{
  Serial.begin(9600); // initialize serial communication
  // pinMode(3, OUTPUT); // initialize motor at pin 3 as output
  // pinMode(2, OUTPUT); // initialize LED at pin 2 as output
  pinMode(rl, OUTPUT); // initialize LED at pin 8 as output
  pinMode(gl, OUTPUT); // initialize LED at pin 9 as output
  
  pinMode(ena, OUTPUT);
  pinMode(ina, OUTPUT);
  pinMode(inb, OUTPUT);
  
  pinMode(irPin, INPUT);
  pinMode(BuzzerPin, OUTPUT);

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  // Motor is set to run in the same direction forever (only speed changes)
  digitalWrite(ina, HIGH);
  digitalWrite(inb, LOW);
}

void loop()
{
   digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  
  cm = distance;
  inches = cm/2.54;

  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(50);
  
    
  if(inches <= 5)           // if object is placed at distance < 50 inches
    {
    analogWrite(ena,0);        // Set the MOTOR speed to 0
    delay(5);
    digitalWrite(rl,HIGH);    // turn BLUE led ON
    digitalWrite(gl,LOW);
    digitalWrite(9,LOW);
    }
  else if(inches >=5 && inches <= 10)     // if object is placed at distance in between 50 to 100 inches   
    {
    analogWrite(ena,127);       // Set the MOTOR speed to HALF speed i.e. 127
    delay(5); 
    digitalWrite(gl,HIGH);
    digitalWrite(rl,HIGH);     // turn GREEN led ON
    digitalWrite(9,LOW);
    }
  else                        // if object is placed at distance > 100 inches
    {
    analogWrite(3,255);       // Set the MOTOR speed to FULL speed i.e. 255
    delay(5);  
    digitalWrite(2,LOW);
    digitalWrite(rl,LOW);  
    digitalWrite(gl,HIGH);     // turn ORANGE led ON
    }
  
  if(digitalRead(irPin) == HIGH){
  	digitalWrite(BuzzerPin, HIGH);
  }
  else{
    digitalWrite(BuzzerPin, LOW);
  }
     
}



