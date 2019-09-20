void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, INPUT);
}

int count=0;

void loop()
{
  if(digitalRead(10) == HIGH){
    count++;
    for(int i =0 ; i<count; i++){
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
      if(count ==5)
        count = 0;
    }
    
      
    
  }
}