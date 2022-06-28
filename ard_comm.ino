#define triPin 2
#define Echo 3
#define vibrator 9

void setup() {
  // put your setup code here, to run once:
  pinMode(Echo,INPUT);
  pinMode(triPin,OUTPUT);
  pinMode(vibrator,OUTPUT);
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
  distance=duration*0.034/2;

  //Serial.print("distance = ");
  Serial.println(int(distance));
   
  if(distance<20){
    digitalWrite(vibrator,HIGH);
    delay(100);
    digitalWrite(Vibrator,LOW);
  }/*
  if(distance<25 and distance>10){
    tone(Buzzer,500,300);
  }
  if(distance<10){
    tone(Buzzer,1000,200);
  }
  else{
    tone(Buzzer,2000,300);
  }*/
}
