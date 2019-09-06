void setup()
{
for(int i=1;i<=13;i++)
{
  pinMode(i,HIGH);
}
}
void loop()
{
 for(int i=10;i<=13;i++)
 {
   if(i==10)
   {
     digitalWrite(i,HIGH);
     delay(1500); 
     allledsoff();
     
   }
   if(i==11)
   {
     for(int p=1;p<=2;p++)
     {
     digitalWrite(i,HIGH);
     digitalWrite(i-1,HIGH);
     delay(1500);  
     allledsoff();
     }
     
   }
   if(i==12)
   {
     for(int p=1;p<=3;p++)
     {
     digitalWrite(i,HIGH);
     digitalWrite(i-1,HIGH);
     digitalWrite(i-2,HIGH);
     
       delay(1500);
     
       allledsoff();
     
     }
   }
   if(i==13)
   {
     for(int p=1;p<=4;p++)
     {
     digitalWrite(i,HIGH);
     digitalWrite(i-1,HIGH);
     digitalWrite(i-2,HIGH);
     digitalWrite(i-3,HIGH);
     delay(1500);
     allledsoff();
     }
   }
 }
for(int k=13;k>10;k--)
{
   
   if(k==13)
   {
     for(int h=1;h<=3;h++)
     {
     digitalWrite(k-3,HIGH);
     digitalWrite(k-2,HIGH);
     digitalWrite(k-1,HIGH);
     delay(1500); 
     allledsoff();
     }
   }
   if(k==12)
   {
     for(int p=1;p<=2;p++)
     {
     digitalWrite(k-2,HIGH);
     digitalWrite(k-1,HIGH);
     delay(1500);  
     allledsoff();
     }
     
   }

  
   }
}

void allledsoff(void)
{
  for(int i=10;i<14;i++)
  {
    digitalWrite(i,LOW);
  delay(100);
  }
}
  