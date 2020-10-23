int trigPin=9;
int echoPin=10;
long sure;
long uzaklik;

void setup()
{
  Serial.begin(9600);  
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
  uzaklik=sure/2*0.0343;
  
  Serial.print("Sinyal: ");
  Serial.print(sure);
  Serial.println(" hareket etmistir.");
  
  Serial.print("Mesafe: ");
  Serial.print(uzaklik);
  Serial.println(" cm");
  
  delay(500);
}
