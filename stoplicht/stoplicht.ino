int trig = 13;
int echo = 12;
int redled = 11;
int purpleled = 10;

long duration;
long distance;

void setup(){
  
  pinMode(trig, OUTPUT); 
  
  pinMode(echo, INPUT);
  
  pinMode(redled, OUTPUT);
 
  pinMode(purpleled, OUTPUT);
}

void loop(){
digitalWrite(trig, LOW);
delay(2);
digitalWrite(trig,HIGH);

duration = pulseIn(echo,HIGH);
distance = duration * 0.034/2;
if(distance < 4){
 digitalWrite(purpleled,LOW);
 digitalWrite(redled,HIGH);
  }else{
     digitalWrite(purpleled,HIGH);
     digitalWrite(redled,LOW);
    }
}

