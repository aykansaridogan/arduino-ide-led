int led1=13;
int led2=10;

byte serialA;

void setup(){
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop(){
  if((serialA == '2')){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }
  else if ((serialA == '1')){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
  }
  else if ((serialA == '3')){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  }
  else if ((serialA == '4')){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }
  
}
void serialEvent(){
  serialA = Serial.read();
}
