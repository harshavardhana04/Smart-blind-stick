#define triPin 7
#define Echo 6
#define vibrato 9

void setup() {
  // put your setup code here, to run once:
  pinMode(Echo,INPUT);
  pinMode(triPin,OUTPUT);
  pinMode(vibrato,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  float duration;
  int distance;
  digitalWrite(triPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triPin,LOW);
  duration=pulseIn(Echo,HIGH);
  distance=(duration*0.034/2);

  //Serial.print("distance = ");
  Serial.println(distance);
  
  if(distance<20){
    digitalWrite(vibrato,HIGH);
    delay(200);
    digitalWrite(vibrato,LOW);
    
  }
  delay(500);
}
