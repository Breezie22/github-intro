//led inserted into pin 13
int led = 13;

void setup() {                

  pinMode(led, OUTPUT);     
}


void loop() {
  digitalWrite(led, HIGH);  //voltage to led is increased
  delay(1000);
  digitalWrite(led, LOW);  //led voltage is decreased  
  delay(1000);              
}
