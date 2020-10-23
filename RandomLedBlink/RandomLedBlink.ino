/*random şekilde led yakmayı bir buton ile kontrol eden program*/
int led_red=3,led_yellow=4,led_white=5,led_green=6;
int button=8;
int number=0;

void setup() 
{
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(led_red,OUTPUT);
  pinMode(led_yellow,OUTPUT);
  pinMode(led_white,OUTPUT);
  pinMode(led_green,OUTPUT);  
  randomSeed(analogRead(A0));
}

void loop() {
  if(digitalRead(button)==HIGH){  
    number=random(3,7);
    Serial.print(number);
  
  switch(number){
    case 3:
    Serial.println(":Red");
    digitalWrite(led_red,HIGH);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_white,LOW);
    digitalWrite(led_green,LOW);
    break;

    case 4:
    Serial.println(":Yellow");
    digitalWrite(led_red,LOW);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_white,LOW);
    digitalWrite(led_green,LOW);
    break;
    
    case 5:
    Serial.println(":White");
    digitalWrite(led_red,LOW);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_white,HIGH);
    digitalWrite(led_green,LOW);
    break;
    
    case 6:
    Serial.println(":Green");
    digitalWrite(led_red,LOW);
    digitalWrite(led_yellow,LOW);
    digitalWrite(led_white,LOW);
    digitalWrite(led_green,HIGH);
    break;    
  }
  } 
  delay(500);
}
