/*
 Nama   : Rafiqul Hakim
 NPM    : 065117002
 email  : rafiqulhakim.065117002@unpak.ac.id
 11 September 2018, trial Running LED
*/

void setup() {
  // put your setup code here, to run once:
  for (int a=1; a<=10; a++){
    pinMode(a, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int a=1; a<=10; a++){
    digitalWrite(a, HIGH);
    delay(150);
    digitalWrite(a, LOW);
  }
  digitalWrite(10, HIGH);

  for(int a=1; a<=9; a++){
    digitalWrite(a, HIGH);
    delay(150);
    digitalWrite(a, LOW);
  }
  digitalWrite(9, HIGH);

  for(int a=1; a<=8; a++){
    digitalWrite(a, HIGH);
    delay(150);
    digitalWrite(a, LOW);
  }
  digitalWrite(8, HIGH);

  for(int a=1; a<=7; a++){
    digitalWrite(a, HIGH);
    delay(150);
    digitalWrite(a, LOW);
  }
  digitalWrite(7, HIGH);

  for(int a=1; a<=6; a++){
    digitalWrite(a, HIGH);
    delay(150);
    digitalWrite(a, LOW);
  }
  digitalWrite(6, HIGH);

  for(int a=1; a<=5; a++){
    digitalWrite(a, HIGH);
    delay(150);
    digitalWrite(a, LOW);
  }
  digitalWrite(5, HIGH);

  for(int a=1; a<=4; a++){
    digitalWrite(a, HIGH);
    delay(150);
    digitalWrite(a, LOW);
  }
  digitalWrite(4, HIGH);

  for(int a=1; a<=3; a++){
    digitalWrite(a, HIGH);
    delay(150);
    digitalWrite(a, LOW);
  }
  digitalWrite(3, HIGH);

  for(int a=1; a<=2; a++){
    digitalWrite(a, HIGH);
    delay(150);
    digitalWrite(a, LOW);
  }
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  delay(150);

//===========================================================================

  for(int a=1; a>=1; a--){
    digitalWrite(a, LOW);
    delay(150);
  }

  for(int a=2; a>=1; a--){
    digitalWrite(a, LOW);
    digitalWrite(a-1, HIGH);
    delay(150);
  }

  for(int a=3; a>=1; a--){
    digitalWrite(a, LOW);
    digitalWrite(a-1, HIGH);
    delay(150);
  }

  for(int a=4; a>=1; a--){
    digitalWrite(a, LOW);
    digitalWrite(a-1, HIGH);
    delay(150);
  }

  for(int a=5; a>=1; a--){
    digitalWrite(a, LOW);
    digitalWrite(a-1, HIGH);
    delay(150);
  }

  for(int a=6; a>=1; a--){
    digitalWrite(a, LOW);
    digitalWrite(a-1, HIGH);
    delay(150);
  }

  for(int a=7; a>=1; a--){
    digitalWrite(a, LOW);
    digitalWrite(a-1, HIGH);
    delay(150);
  }

  for(int a=8; a>=1; a--){
    digitalWrite(a, LOW);
    digitalWrite(a-1, HIGH);
    delay(150);
  }
  
  for(int a=9; a>=1; a--){
    digitalWrite(a, LOW);
    digitalWrite(a-1, HIGH);
    delay(150);
  }

  for(int a=10; a>=1; a--){
    digitalWrite(a, LOW);
    digitalWrite(a-1, HIGH);
    delay(150);
  }
}
