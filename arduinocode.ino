int pwm1=3;
int pwm2=5;
int pwm3=6;
int pwm4=9;
int dir1=2;
int dir2=4;
int dir3=7;
int dir4=8;
char a;
int i;

void slowdown(){
  for(;i>=0;i=i-10){
    analogWrite(pwm1,i);
    analogWrite(pwm2,i);
    analogWrite(pwm3,i);
    analogWrite(pwm4,i);
    Serial.println(i);
    delay(200);
    if(i==0){
      break;
    }
  }
}
void setup() {
pinMode(pwm1,OUTPUT);
pinMode(pwm2,OUTPUT);
pinMode(pwm3,OUTPUT);
pinMode(pwm4,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(dir3,OUTPUT);
pinMode(dir4,OUTPUT);
Serial.begin(9600);
}

void loop() {
if (Serial.available()){
  a=Serial.read();
  switch(a){
    case 'W':
    slowdown();
    for(i=0; i<=180;i++){
    analogWrite(pwm1,i);
    digitalWrite(dir1,HIGH);
    analogWrite(pwm2,i);
    digitalWrite(dir2,HIGH);
    analogWrite(pwm3,i);
    digitalWrite(dir3,HIGH);
    analogWrite(pwm4,i);
    digitalWrite(dir4,HIGH);
    Serial.println(i);
    delay(50);}
    break;
    case 'S':
    slowdown();
    for(int i=0; i<=180;i++){
    analogWrite(pwm1,i);
    digitalWrite(dir1,LOW);
    analogWrite(pwm2,i);
    digitalWrite(dir2,LOW);
    analogWrite(pwm3,i);
    digitalWrite(dir3,LOW);
    analogWrite(pwm4,i);
    digitalWrite(dir4,LOW);
    Serial.println(i);
    delay(50);}
    break;
    case 'Q':
    slowdown();
    for(int i=0; i<=120;i++){
    analogWrite(pwm1,i);
    digitalWrite(dir1,HIGH);
    analogWrite(pwm2,i);
    digitalWrite(dir2,HIGH);
    analogWrite(pwm3,i);
    digitalWrite(dir3,LOW);
    analogWrite(pwm4,i);
    digitalWrite(dir4,LOW);
    Serial.println(i);
    delay(50);}
    break;
    case 'E':
    slowdown();
    for(int i=0; i<=120;i++){
    analogWrite(pwm1,i);
    digitalWrite(dir1,LOW);
    analogWrite(pwm2,i);
    digitalWrite(dir2,LOW);
    analogWrite(pwm3,i);
    digitalWrite(dir3,HIGH);
    analogWrite(pwm4,i);
    digitalWrite(dir4,HIGH);
    Serial.println(i);
    delay(50);}
    break;
    case 'D':
    slowdown();
    for(int i=0; i<=180;i++){
    analogWrite(pwm1,i);
    digitalWrite(dir1,HIGH);
    analogWrite(pwm2,i);
    digitalWrite(dir2,HIGH);
    analogWrite(pwm3,i);
    digitalWrite(dir3,LOW);
    analogWrite(pwm4,i);
    digitalWrite(dir4,LOW);
    Serial.println(i);
    delay(50);}
    break;
    case 'A':
    slowdown();
    for(int i=0;i<=180;i++){
    analogWrite(pwm1,i);
    digitalWrite(dir1,LOW);
    analogWrite(pwm2,i);
    digitalWrite(dir2,LOW);
    analogWrite(pwm3,i);
    digitalWrite(dir3,HIGH);
    analogWrite(pwm4,i);
    digitalWrite(dir4,HIGH);
    Serial.println(i);
    delay(50);}
    case '':
    slowdown();
    analogWrite(pwm1,LOW);
    analogWrite(pwm2,LOW);
    analogWrite(pwm3,LOW);
    analogWrite(pwm4,LOW);
    break;
  }

}


}
