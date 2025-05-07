const int pinAwal = 1;
const int pinBesar = 10;

void setup() {
    for (int semuaPin = pinAwal; semuaPin <= pinBesar; semuaPin++)
    {
      pinMode(semuaPin, OUTPUT);
    }
}

void loop() {
    for(int semuaPin = pinAwal; semuaPin <= pinBesar; semuaPin++) {
        digitalWrite(semuaPin, HIGH);
        delay(100);
    }
    for (int semuaPin = pinBesar; semuaPin >= pinAwal; semuaPin--) {
        digitalWrite(semuaPin, LOW);
        delay(100);
    }
    for (int semuaPin = pinBesar; semuaPin >= pinAwal; semuaPin--) {
        digitalWrite(semuaPin, HIGH);
        delay(100);
    }
    for(int semuaPin = pinAwal; semuaPin <= pinBesar; semuaPin++) {
        digitalWrite(semuaPin, LOW);
        delay(100);
    }
}
