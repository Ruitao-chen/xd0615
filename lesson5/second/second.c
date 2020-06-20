void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);//测试
  pinMode(7, OUTPUT);//消隐or空白
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  Serial.begin(9600);
}
int m=0,n=8;
byte income[3]={0};
void loop()
{
  if(Serial.available()>0)
  {
     if(n=12)
      {
        m=0;
        n=8;
       digitalWrite(8,LOW);
       digitalWrite(9,LOW);
       digitalWrite(10,LOW);
       digitalWrite(11,LOW);
      }
    for(m=0;m<4;m++)
    {
      income[m]=Serial.read();
      income[m]-='0';
      digitalWrite(2,income[m]&0x1);
      digitalWrite(3,(income[m]>>1)&0x1);
      digitalWrite(4,(income[m]>>2)&0x1);
      digitalWrite(5,(income[m]>>3)&0x1);
      digitalWrite(n,HIGH);
  	  n++;
      delay(10);
     }
  }
}
