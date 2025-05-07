
int pinLED1 = 6;
int pinLED2 = 7;
int pinLED3 = 8;

void setup() {
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
}

void loop() {
  for(int i=0; i<4; i++) {
    if(i==0){
      digitalWrite(pinLED1, HIGH);
      digitalWrite(pinLED2, LOW);
      digitalWrite(pinLED3, LOW);
    }
    else if(i==1){
      digitalWrite(pinLED1, HIGH);
      digitalWrite(pinLED2, HIGH);
      digitalWrite(pinLED3, LOW);
    }
    else if (i==2) {
      digitalWrite(pinLED1, HIGH);
      digitalWrite(pinLED2, HIGH);
      digitalWrite(pinLED3, HIGH);
    }
    else if (i==3) {
      digitalWrite(pinLED1, LOW);
      digitalWrite(pinLED2, LOW);
      digitalWrite(pinLED3, LOW);
    }
    delay(300);
  }
}
