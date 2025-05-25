
int ledpin=13;
//assigning pin to the led in arduino uno
void setup(){
               pinMode(ledpin,OUTPUT);
//Declaring that the pin is output to the led
}
void loop(){
            digitalWrite(ledpin,HIGH);
            //Triggering the pin with ON or HIGH commad
            delay(1000);
            //Time for the input triggering(1000ms=1s)
            digitalWrite(ledpin,LOW);
            //Triggering the pin with OFF or LOW commad
            delay(1000);
            //Time for the input triggering(1000ms=1s)
            
}
