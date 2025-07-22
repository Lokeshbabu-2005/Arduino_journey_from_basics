int one = 10;
int two = 11;
int four = 12;
int eight = 13;
int lag=500;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  

}

void loop() {
  
  digitalWrite(one , LOW);
  digitalWrite(two , LOW);
  digitalWrite(four, LOW);
  digitalWrite(eight,LOW);
  delay(lag);

  digitalWrite(one , HIGH);
  digitalWrite(two , LOW);
  digitalWrite(four, LOW);
  digitalWrite(eight,LOW);
  delay(lag);

  digitalWrite(one , LOW);
  digitalWrite(two , HIGH);
  digitalWrite(four, LOW);
  digitalWrite(eight,LOW);
  delay(lag);

  digitalWrite(one , HIGH);
  digitalWrite(two , HIGH);
  digitalWrite(four, LOW);
  digitalWrite(eight,LOW);
  delay(lag);

  digitalWrite(one , LOW);
  digitalWrite(two , LOW);
  digitalWrite(four, HIGH);
  digitalWrite(eight,LOW);
  delay(lag);

  digitalWrite(one , HIGH);
  digitalWrite(two , LOW);
  digitalWrite(four, HIGH);
  digitalWrite(eight,LOW);
  delay(lag);

  digitalWrite(one , LOW);
  digitalWrite(two , HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight,LOW);
  delay(lag);

  digitalWrite(one , HIGH);
  digitalWrite(two , HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight,LOW);
  delay(lag);

  digitalWrite(one , LOW);
  digitalWrite(two , LOW);
  digitalWrite(four, LOW);
  digitalWrite(eight,HIGH);
  delay(lag);
  digitalWrite(one , HIGH);
  digitalWrite(two , LOW);
  digitalWrite(four, LOW);
  digitalWrite(eight,HIGH);
  delay(lag);

  digitalWrite(one , LOW);
  digitalWrite(two , HIGH);
  digitalWrite(four, LOW);
  digitalWrite(eight,HIGH);
  delay(lag);

  digitalWrite(one , HIGH);
  digitalWrite(two , HIGH);
  digitalWrite(four, LOW);
  digitalWrite(eight,HIGH);
  delay(lag);

  digitalWrite(one , LOW);
  digitalWrite(two , LOW);
  digitalWrite(four, HIGH);
  digitalWrite(eight,HIGH);
  delay(lag);

  digitalWrite(one , HIGH);
  digitalWrite(two , LOW);
  digitalWrite(four, HIGH);
  digitalWrite(eight,HIGH);
  delay(lag);

  digitalWrite(one , LOW);
  digitalWrite(two , HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight,HIGH);
  delay(lag);

  digitalWrite(one , HIGH);
  digitalWrite(two , HIGH);
  digitalWrite(four, HIGH);
  digitalWrite(eight,HIGH);
  delay(lag);

  digitalWrite(one , LOW);
  digitalWrite(two , LOW);
  digitalWrite(four, LOW);
  digitalWrite(eight,LOW);
  delay(lag);

 
  
}
