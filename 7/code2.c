#include <MsTimer2.h>     //定时器库的头文件
 
int pinInterrupt = 2;
int tick = 0,m; //计数值
 
//中断服务程序
void Change()//按钮控制
{
   tick=-1;
   m=0;
}
void Time()//数字循环控制
{
  if(m>9)
    tick=-1;
  Serial.println(tick++);
  m=tick;//防止乱码
  digitalWrite(4, m&0x1);
  digitalWrite(5,( m>>1)&0x1);
  digitalWrite(6,( m>>2)&0x1);
  digitalWrite(7,( m>>3)&0x1);
}
 
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(11, OUTPUT);//锁定
  pinMode(13, OUTPUT);//测试
  pinMode(12, OUTPUT);//消隐or空白
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  Serial.begin(9600); //初始化串口
  pinMode( pinInterrupt, INPUT);
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), Change, CHANGE);
  MsTimer2::set(1000, Time); //设置中断，每1000ms进入一次中断服务程序 onTimer()
  MsTimer2::start();//开始计shi
   
}
 
void loop()
{
  
}