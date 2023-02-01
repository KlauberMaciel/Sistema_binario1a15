int botao = 2;

int led = 7;
int led1= 6;
int led2= 5;
int led3 = 4;
int c;

bool read_botao;

void setup() {

  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

c=0;

digitalWrite(led, LOW);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
}

void loop() {
read_botao = digitalRead(botao);

if(read_botao == HIGH)
{
  c=c+1;
}
 else  if(c == 0){
    digitalWrite(led, LOW);
    digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
       delay(100);

    }
     if(c == 1){
        digitalWrite(led, HIGH);
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
         delay(100);
        
   
      }
       else if (c== 2){
       digitalWrite(led, LOW); 
       digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
         delay(100);
       
      }

      else if(c==3){
        digitalWrite(led, HIGH);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
         delay(100);
       
      }
      else if(c==4){
        digitalWrite(led, LOW); 
       digitalWrite(led1, LOW);
       digitalWrite(led2, HIGH);
         digitalWrite(led3, LOW);
          delay(100);
     
      } if(c==5){
        digitalWrite(led, HIGH);
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
          digitalWrite(led3, LOW);
         delay(100);
      }
       else if (c == 6 ){
         digitalWrite(led, LOW);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
          digitalWrite(led3, LOW);
         delay(100);
      }
      else if (c==7){
             digitalWrite(led, HIGH);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
          digitalWrite(led3, LOW);
         delay(100);
      }
      if(c==8){
                  digitalWrite(led, LOW);
              digitalWrite(led1, LOW);
              digitalWrite(led2, LOW);
                digitalWrite(led3, HIGH);
              delay(100);
      }
      else 
      if(c==9){
       digitalWrite(led, HIGH);
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
          digitalWrite(led3, HIGH);
         delay(100);

      }
     if(c==10){
          digitalWrite(led, LOW);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
          digitalWrite(led3, HIGH);
         delay(100);
      }else 
        if(c == 11)
        {
           digitalWrite(led, HIGH);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
          digitalWrite(led3, HIGH);
         delay(100); 
        }else 
        if (c == 12 ){
            digitalWrite(led, LOW);
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
          digitalWrite(led3, HIGH);
         delay(100); 
        }else 
        if (c== 13){
                  digitalWrite(led, HIGH);
              digitalWrite(led1, LOW);
              digitalWrite(led2, HIGH);
                digitalWrite(led3, HIGH);
              delay(100); 
          }else if(c== 14){
          digitalWrite(led, LOW);
          digitalWrite(led1, HIGH);
          digitalWrite(led2, HIGH);
            digitalWrite(led3, HIGH);
          delay(100); 
          }
          else if (c == 15){
                    digitalWrite(led, HIGH);
                digitalWrite(led1, HIGH);
                digitalWrite(led2, HIGH);
                  digitalWrite(led3, HIGH);
                delay(100);  
                 
         
          }else if(c>=16){
c=0;            
          }

}