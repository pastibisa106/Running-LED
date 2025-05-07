// inisialisasi pin LED
int pinLED1 = 1;
int pinLED2 = 2;
int pinLED3 = 3;
int pinLED4 = 4;
int pinLED5 = 5;
int pinLED6 = 6;
int pinLED7 = 7;
int pinLED8 = 8;
int pinLED9 = 9;
int pinLED10 = 10;

void setup() {
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
  pinMode(pinLED5, OUTPUT);
  pinMode(pinLED6, OUTPUT);
  pinMode(pinLED7, OUTPUT);
  pinMode(pinLED8, OUTPUT);
  pinMode(pinLED9, OUTPUT);
  pinMode(pinLED10, OUTPUT);
}

void loop() {
    for(int a = 0; a<=10; a++){
        if(a==1){
            digitalWrite(pinLED1, HIGH);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, LOW);
        } else if(a==2){
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, HIGH);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, LOW);
        } else if (a == 3) {
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, HIGH);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, LOW);
        } else if(a==4){
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, HIGH);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, LOW);
        }
        else if(a==5){
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, HIGH);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, LOW);
        }
        else if(a==6){
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, HIGH);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, LOW);
        }
        else if(a==7){
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, HIGH);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, LOW);
        }
        else if(a==8){
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, HIGH);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, LOW);
        }
        else if(a==9){
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, HIGH);
            digitalWrite(pinLED10, LOW);
        }
        else if(a==10){
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, HIGH);
        } else {
            digitalWrite(pinLED1, LOW);
            digitalWrite(pinLED2, LOW);
            digitalWrite(pinLED3, LOW);
            digitalWrite(pinLED4, LOW);
            digitalWrite(pinLED5, LOW);
            digitalWrite(pinLED6, LOW);
            digitalWrite(pinLED7, LOW);
            digitalWrite(pinLED8, LOW);
            digitalWrite(pinLED9, LOW);
            digitalWrite(pinLED10, LOW);
        }
        delay(200);
    }
  
//  digitalWrite(LED_BUILTIN, HIGH);
//  delay(1000);
//  digitalWrite(LED_BUILTIN, LOW);
//  delay(1000);
}
