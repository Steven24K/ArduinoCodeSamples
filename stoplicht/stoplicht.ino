//stoplicht 1
int red1 = 7;
int orng1 = 6;
int grn1 = 5;

// stoplicht 2
int red2 = 11;
int orng2 = 12; 
int grn2 = 13;

//Ultrasonesensor
int trig = 9;
int echo = 10;
int distance;
int duration;

void setup() {
//setup stoplicht 1
pinMode(red1, OUTPUT);
pinMode(orng1, OUTPUT);
pinMode(grn1, OUTPUT);
//setup stoplicht 2
pinMode(red2, OUTPUT);
pinMode(orng2, OUTPUT);
pinMode(grn2, OUTPUT);
//setup ultrasone
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);

digitalWrite(grn1, HIGH);
delay(100);
digitalWrite(red2, HIGH);
  

}

int checkTraffic(){
  digitalWrite(trig,HIGH);
  delay(100);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance = duration * 0.034/2;

 return(distance);
 }

int switchLed(int led, int timeout){
  delay(timeout);
  if(digitalRead(led) == HIGH){
    digitalWrite(led, LOW);
    }else{
      digitalWrite(led, HIGH);
      }
  }

void loop() {
   switchLed(grn1, 5000);
   switchLed(orng1, 1000);
   
   switchLed(red1, 1000);
   switchLed(orng1, 1000);
  switchLed(red1, 5000);
}
