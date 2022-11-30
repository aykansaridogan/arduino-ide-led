String readString= "";
int led1=13;
int led2=10;

void setup() { 
  pinMode( led1, OUTPUT);
  pinMode( led2, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  while( Serial.available()){
    char c = (char)Serial.read();
    readString +=c ;
  }
  if (readString.length()>0){
    if(readString == "Sağdaki led'i yak"){
       digitalWrite(led1, HIGH);
       digitalWrite(led2, LOW);
       Serial.print("Sağdaki led yakıldı.");
    }
     if(readString == "Sağdaki led'i kapat"){
       digitalWrite(led1, LOW);
       digitalWrite(led2, LOW);
       Serial.print("Sağdaki led kapatıldı.");
    }
    if(readString == "soldaki ledi yak"){
       digitalWrite(led1, LOW);
       digitalWrite(led2, HIGH);
       Serial.print("Soldaki led yakıldı.");

    }
    if(readString == "soldaki ledi kapat"){
       digitalWrite(led1, LOW);
       digitalWrite(led2, LOW);
       Serial.print("Soldaki led kapatıldı.");

    }
    if(readString == "kapat"){
       digitalWrite(led1, HIGH);
       digitalWrite(led2, HIGH);
       Serial.print("Bütün ledler kapatıldı.");

    }
    if(readString == "aç"){
       digitalWrite(led1, LOW);
       digitalWrite(led2, LOW);
       Serial.print("Bütün ledler açıldı.");
    }
    readString= "";
  }
  delay(100);
}
