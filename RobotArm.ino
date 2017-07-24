#include <Servo.h> 
 
Servo myservo1; 
Servo myservo2;  
Servo myservo3; 
int i=0;

//int button_pin = 2;
//int led_pin=13;
//int button_state ;
//int lastbutton_state;
//int count =0;
//boolean state = false;

double posThumb = 0;
double posFore = 0;
double posLittle = 0;
 
void setup() 
{ 
  //pinMode(button_pin, INPUT);
  //pinMode(led_pin,OUTPUT);
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
  Serial.begin(9600); 
  } 
  
void DemoAll(){ 
  for(posThumb=140, posFore=95, posLittle=25; posThumb>=10, posFore>=0, posLittle<=95; posThumb-=1.857142857, posFore-=1.357142857, posLittle+=1.0){                                  
     myservo1.write(posThumb);
     myservo2.write(posFore);
     myservo3.write(posLittle);  
     delay(100);
  }
  delay(500);
  for(posThumb=10, posFore=0, posLittle=95; posThumb<=140, posFore<=95, posLittle>=25; posThumb+=1.857142857, posFore+=1.357142857, posLittle-=1.0){                          
    myservo1.write(posThumb);
    myservo2.write(posFore);
    myservo3.write(posLittle);             
    delay(100);                        
  }
}

void DemoThumbForeFinger(){ 
  for(posThumb=140, posFore=95; posThumb>=10, posFore>=0; posThumb-=1.857142857, posFore-=1.357142857){                                  
     myservo1.write(posThumb);
     myservo2.write(posFore);
     myservo3.write(25);  
     delay(100);                      
  }
    delay(500);
  for(posThumb=10, posFore=0; posThumb>=140, posFore>=95; posThumb-=1.857142857, posFore-=1.357142857){                                  
     myservo1.write(posThumb);
     myservo2.write(posFore);
     myservo3.write(25);  
     delay(100);
  }
}

void DemoThumbLittleFinger(){ 
  for(posThumb=140, posLittle=25; posThumb>=10, posLittle<=95; posThumb-=1.857142857, posLittle+=1.0){                                  
     myservo1.write(posThumb);
     myservo2.write(95);
     myservo3.write(posLittle);  
     delay(100);
  }
  delay(500);
  for(posThumb=10, posLittle=95; posThumb<=140, posLittle>=25; posThumb+=1.857142857, posLittle-=1.0){                          
    myservo1.write(posThumb);
    myservo2.write(95);
    myservo3.write(posLittle);             
    delay(100);                        
  }
}

void DemoForeLittleFinger(){ 
  for(posFore=95, posLittle=25; posFore>=0, posLittle<=95; posFore-=1.357142857, posLittle+=1.0){                                  
     myservo1.write(140);
     myservo2.write(posFore);
     myservo3.write(posLittle);  
     delay(100);
  }
  delay(500);
  for(posFore=0, posLittle=95; posFore<=95, posLittle>=25; posFore+=1.357142857, posLittle-=1.0){                          
    myservo1.write(140);
    myservo2.write(posFore);
    myservo3.write(posLittle);             
    delay(100);                        
  }
}

void DemoThumb(){
 for(posFore = 10; posFore <= 140; posFore +=1.857142857){                                  
   myservo2.write(posFore);  
   delay(10);  
 } 
 for(posFore = 140; posFore>=10; posFore-=1.857142857){                                  
   myservo2.write(posFore);              
   delay(10);                        
 }
}

void DemoForeFinger(){
 for(posFore = 0; posFore <= 95; posFore+=1.357142857){                                  
   myservo2.write(posFore);  
   delay(10);  
 } 
 for(posFore = 95; posFore>=0; posFore-=1.357142857){                                  
   myservo2.write(posFore);              
   delay(10);                        
 }
}

void DemoLittleFinger(){
 for(posLittle = 30; posLittle <= 95; posLittle +=1){                                  
   myservo3.write(posLittle);  
   delay(10);  
 } 
 for(posLittle = 95; posLittle>=30; posLittle-=1){                                  
   myservo3.write(posLittle);              
   delay(10);                        
 }
}


void loop(){
DemoAll();
DemoThumbForeFinger();
DemoThumbLittleFinger();
DemoForeLittleFinger();
} 







