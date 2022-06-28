#define trigPin 2
#define echoPin 3

#define Buzzer1 11 //active
#define Led1 6//Vibration

 
int sound = 25000;


void setup() {
 Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(Buzzer1, OUTPUT);
 //inMode(Buzzer2, OUTPUT);
 pinMode(Led1, OUTPUT);
}

void loop() {
  Serial.begin(9600);
  //noTone(11);
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  Serial.println(distance);
  digitalWrite(Led1, LOW);
  delay(100);  
 
  if (distance<40 and distance>20) {
    Serial.println("distance is 40");
    delay(100);  
    tone(11,350,500);
   
  }
  else if (distance<20 and distance>10) {
    Serial.println("distance is 20");
    delay(100);  
    tone(11,800,500);
   
  }
  else if (distance<10) {
    Serial.println("Distance is 10");
    delay(100);  
    tone(11,2000,500);
    digitalWrite(Led1, HIGH);
  }
  delay(1000);
   
 
  }
