int neg1 = 13;  //"neg1" is connected to the 13th digital pin of arduino
int neg2 = 12;  //"neg2" is connected to the 12th digital pin of arduino
int neg3 = 11;  //"neg3" is connected to the 11th digital pin of arduino
int neg4 = 10;  //"neg4" is connected to the 10th digital pin of arduino
int neg5 = 9;   //"neg5" is connected to the 9th digital pin of arduino
int neg6 = 8;   //"neg6" is connected to the 8th digital pin of arduino
int neg7 = 7;   //"neg7" is connected to the 7th digital pin of arduino
int neg8 = 6;   //"neg8" is connected to the 6th digital pin of arduino
int neg9 = 5;   //"neg9" is connected to the 5th digital pin of arduino

int pos1 = 4;   //"pos1" is connected to the 4th digital pin of arduino
int pos2 = 3;   //"pos2" is connected to the 3rd digital pin of arduino
int pos3 = 2;   //"pos3" is connected to the 2nd digital pin of arduino
int delay_time=100, j=0;
void setup() {
  // put your setup code here, to run once:
pinMode(neg1, OUTPUT);     
  pinMode(neg2, OUTPUT);     
  pinMode(neg3, OUTPUT);     
  pinMode(neg4, OUTPUT);     
  pinMode(neg5, OUTPUT);     
  pinMode(neg6, OUTPUT);     
  pinMode(neg7, OUTPUT);     
  pinMode(neg8, OUTPUT);     
  pinMode(neg9, OUTPUT);  
  
  pinMode(pos1, OUTPUT);     
  pinMode(pos2, OUTPUT);     
  pinMode(pos3, OUTPUT);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
delay(3700);
digitalWrite(9,LOW);
digitalWrite(5,HIGH);
digitalWrite(7,HIGH);
digitalWrite(11,HIGH);
digitalWrite(13,HIGH);
delay(3700);
digitalWrite(5,LOW);
digitalWrite(7,LOW);
digitalWrite(11,LOW);
digitalWrite(13,LOW);
digitalWrite(6,HIGH);
digitalWrite(8,HIGH);
digitalWrite(10,HIGH);
digitalWrite(12,HIGH);
delay(3700);
for(int i=0;i<10;i++){
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
delay(250);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
delay(500);
}
for(j=0;j<6;j++)
  {
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);

    delay(150);

 digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
    
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
delay(150);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);


    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(150);
   
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);

delay(150);

 digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);

delay(150);

 digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
delay(150);
    
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);


    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);

      digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);

    delay(150);

 digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
    
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
delay(150);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);


    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(150);
   
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);

delay(150);

 digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);

delay(150);

 digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
delay(150);
    
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);


    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);

















    

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);

    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);

    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);

    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);

    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);









  
     
     
     
     
     
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

       digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

      digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    
      digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);





     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

       digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

      digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    
      digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);





    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

       digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

      digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);


    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);




    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
 digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
   
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);





     digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);









     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(200);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200); 

    
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(200);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200); 

    
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(200);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200); 

    
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(200);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200); 

    
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(200);
      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(200);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(200); 











     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(150);






     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);






     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);








     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(150);






     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);






     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);








     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(150);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(150);
  }
}
