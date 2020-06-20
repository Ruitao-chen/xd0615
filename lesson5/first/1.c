void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);//测试
  pinMode(7, OUTPUT);//消隐or空白
  Serial.begin(9600);
}
byte income=0;
void loop()
{
  if(Serial.available()>0)
  {
  	income=Serial.read();
    
    income=income-'0';
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
  	delay(10);
  }
}
