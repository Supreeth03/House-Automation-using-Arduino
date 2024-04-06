
#include<DHT.h>
#include<TimerOne.h>
#define led1 5
#define buzzer 8
#define ir_sense 2
#define reset 3
#define ac 10
#define security 9
#define touch 7
DHT dht1(11,DHT11);
int temp,humidity,y;
void setup() {
  dht1.begin();
  pinMode(security,OUTPUT);
  pinMode(touch,INPUT);
  pinMode(ir_sense,INPUT);
  pinMode(reset,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(buzzer,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(ir_sense),alarm,FALLING);
  attachInterrupt(digitalPinToInterrupt(reset),reset1,RISING);
  Serial.begin(9600);
}
char x;
int touchread;
int count=0;
void loop() {
  touchread=digitalRead(touch);
  if(touchread==1){
      digitalWrite(security,HIGH);
      digitalWrite(ac,LOW);
    }
   y=digitalRead(security);

  temp=dht1.readTemperature();
  humidity=dht1.readHumidity();
  Serial.println(temp);
  if(count>0 && y==LOW){
    if(temp>=30){
        digitalWrite(ac,HIGH);
      }
    else if(temp>26 && temp<30){
        analogWrite(ac,55);
      }
    else if(temp<=26){
        digitalWrite(ac,LOW);
      }
  }
  else{
      digitalWrite(ac,LOW);
    }
  if(Serial.available()){
      x=Serial.read();
      if(x=='$'){
          digitalWrite(led1,HIGH);
        }
      else if(x=='!'){
          digitalWrite(led1,LOW);
        }
      else if(x=='*'){
          analogWrite(led1,55);
          
        }
        }
 }
  

void alarm(){
  if(y==HIGH){
      digitalWrite(buzzer,HIGH);
      if(led1!=HIGH){
        digitalWrite(led1,HIGH);
      }
  }
  count+=1;
}
void reset1(){
    digitalWrite(buzzer,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(security,LOW);
  }
  
