
int resval=0;
int respin=A0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  resval=analogRead(respin);
  Serial.println(resval);
  
  delay(1000);
}