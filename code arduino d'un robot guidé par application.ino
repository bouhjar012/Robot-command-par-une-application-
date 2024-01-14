
#include <SoftwareSerial.h> 

#define RxD 2 
#define TxD A1
#define in1 3
#define in2 4 
#define in3 5
#define in4 6 
SoftwareSerial blueToothSerial(RxD,TxD);



void setup() {
  // put your setup code here, to run once:
 pinMode(in1,OUTPUT);
pinMode(in3,OUTPUT);
 pinMode(in4,OUTPUT);
 pinMode(in2,OUTPUT);
blueToothSerial.begin(9600);
  Serial.begin(9600);
 
  pinMode(RxD, INPUT);
 pinMode(TxD, OUTPUT);
 digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
   digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
char recvChar;   

 if(blueToothSerial.available()) {
      recvChar = blueToothSerial.read();
      Serial.print("Read character: ");
      Serial.println(recvChar);}


     if(recvChar=='F') {  
 
 Serial.println("        Forward ");
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
      }


 if(recvChar=='I') {  
 
 Serial.println("        Forward ");
digitalWrite(in1,HIGH);
digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
      }

       if(recvChar=='G') {  
 
 Serial.println("        Forward ");
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);
      }

      
 if(recvChar=='L'){
 
 Serial.println("          Right");
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  
  digitalWrite(in4,LOW);
      }

     

      
if(recvChar=='R'){
      
    
 Serial.println("         Left");
  
 
 digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);

  digitalWrite(in4,HIGH);
      }

     

           

      
 if(recvChar=='B'){
   
 Serial.println("          Back ");
     
   digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}

 if(recvChar=='J'){
   
 Serial.println("          Back ");
     
   digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
 if(recvChar=='H'){
   
 Serial.println("          Back ");
     
   digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);
}

if(recvChar=='S'){
 digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
   digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);

  }

}
