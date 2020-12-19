void setup() {
 pinMode(A0,INPUT);
 pinMode(A1,INPUT);
 pinMode(A2,INPUT);
 Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
  Serial.print("A0");
  Serial.println(analogRead(A0));
  delay(1000);
  Serial.print("A1");
  Serial.println(analogRead(A1));
  delay(1000);
  Serial.print("A2");
  Serial.println(analogRead(A2));
  delay(1000);
  

  // put your main code here, to run repeatedly:

}
