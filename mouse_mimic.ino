int val_1;
int val_2;
int val_3;
int val_4;
String dir;
int tpin=4;
int epin=5;
int val;
float dist;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(tpin,OUTPUT);
pinMode(epin,INPUT);
Serial.begin(9600);
}
void up()
{Serial.println("1");
return;}
void down()
{Serial.println("0");
return;}
void right()
{Serial.println("6");
return;}
void left()
{Serial.println("4");
return;}
void left_double()
{Serial.println("44");
return;}
void right_double()
{Serial.println("66");
return;}
void right_move()
{Serial.println("666");
return;}
void left_move()
{Serial.println("444");
return;}
void up_move()
{Serial.println("11");
return;}
void down_move()
{Serial.println("22");
return;}


void loop() {
  val_1=analogRead(A0);
  val_2=analogRead(A1);
  val_3=analogRead(A2);//>600
  val_4=analogRead(A3);//>650
  digitalWrite(tpin,LOW);
  delayMicroseconds(2000);
  digitalWrite(tpin,HIGH);
  delayMicroseconds(20);
  digitalWrite(tpin,LOW); 
  val=pulseIn(epin,HIGH);
  dist=343*(1.0/1000000)*val*100/2;
  //Serial.println(dist);
  if(dist<=10&&val_1>500)
  {left_double();}
  if(dist<=10&&val_2>700)
  {right_double();}

  if(dist>10&&dist<=20&&val_1>500)
  {left();}
  if(dist>10&&dist<=20&&val_2>700)
  {right();}
  if(val_1>500&&dist>20)
  {up();}
  if(val_2>700&&dist>20)
  {down();}
  if(val_3>500&&dist>20)
  {up_move();}
  if(val_4>500&&dist>20)
  {down_move();}
  if(val_4>500&&dist>10&&dist<=20)
  {right_move();
  }
  if(val_3>500&&dist>10&&dist<=20)
  {left_move();}
  //Serial.println(val_4);
  //delay(1000);
  while(val_1>500){ val_1=analogRead(A0);}
  while(val_2>700){val_2=analogRead(A1);}
  while(val_3>500){val_3=analogRead(A2);}
  while(val_4>500){val_4=analogRead(A3);}
}
