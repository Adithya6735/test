int buttonState1=0;
int buttonState2=0;
int buttonState3=0;
int count1=0;
int count2=0;
int count3=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(12, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop()
{
  buttonState1=digitalRead(12);
  buttonState2=digitalRead(7);
  buttonState3=digitalRead(3);
  if(buttonState1==0)
  {
    if(count1==2)
    {
      count1=0;
    }
    count1++;
    while(digitalRead(12)==0);
    if(count1==1)
    {
      digitalWrite(13,HIGH);
    }
    else if(count1==2)
    {
      digitalWrite(13,LOW);
    }
  }
  
  if(buttonState2==0)
  {
    if(count2==2)
    {
      count2=0;
    }
    count2++;
    while(digitalRead(7)==0);
    if(count2==1)
    {
      digitalWrite(8,HIGH);
    }
    else if(count2==2)
    {
      digitalWrite(8,LOW);
    }
  }
 
  
  if(buttonState3==0)
  {
    if(count3==2)
    {
      count3=0;
    }
    count3++;
    while(digitalRead(3)==0);
    if(count3==1)
    {
      digitalWrite(4,HIGH);
    }
    else if(count3==2)
    {
      digitalWrite(4,LOW);
    }
  }
}