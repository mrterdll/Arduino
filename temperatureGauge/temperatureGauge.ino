/* 
Sıcaklık değerlerine göre artan parlaklık göstegesi
*/
int led_red=3,led_yellow=4,led_white=5,led_green=6;
int temperature=0;

void setup() 
{
  pinMode(led_red,OUTPUT);
  pinMode(led_yellow,OUTPUT);
  pinMode(led_white,OUTPUT);
  pinMode(led_green,OUTPUT);
}

void loop() {
    digitalWrite(led_red,LOW);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_white,LOW);
    digitalWrite(led_green,LOW);
    delay(1500);
while(1){
  
temperature=temperature+5;
  if(temperature<=20){
    digitalWrite(led_red,HIGH);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_white,LOW);
    digitalWrite(led_green,LOW);                       
  }
  else if(temperature>20 && temperature<=30){
    digitalWrite(led_red,HIGH);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_white,LOW);
    digitalWrite(led_green,LOW);
  }
  else if(temperature>30 && temperature<=40) {
    digitalWrite(led_red,HIGH);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_white,HIGH);
    digitalWrite(led_green,LOW);
  }
  else{
    digitalWrite(led_red,HIGH);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_white,HIGH);
    digitalWrite(led_green,HIGH);
  }
  delay(1000);
}
}
