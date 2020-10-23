
int led_green=4,led_yellow=5,led_white=6,led_red=7;
int a0_digital_value=0;

void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(led_red,OUTPUT);
  pinMode(led_yellow,OUTPUT);
  pinMode(led_white,OUTPUT);
  pinMode(led_green,OUTPUT);
}

void loop()
{
  a0_digital_value=analogRead(A0);
  Serial.println(a0_digital_value);
  if(a0_digital_value<=200){
    digitalWrite(led_red,HIGH);
    digitalWrite(led_white,LOW);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_green,LOW);
  }
  else if(a0_digital_value<=400){
    digitalWrite(led_red,LOW);
    digitalWrite(led_white,HIGH);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_green,LOW);
  }
  else if(a0_digital_value<=600){
    digitalWrite(led_red,LOW);
    digitalWrite(led_white,LOW);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_green,LOW);
  }
  else if(a0_digital_value<=800){
    digitalWrite(led_red,LOW);
    digitalWrite(led_white,LOW);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_green,HIGH);
  }
  else{
    digitalWrite(led_red,HIGH);
    digitalWrite(led_white,HIGH);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_green,HIGH);
  }
  delay(900);
}
