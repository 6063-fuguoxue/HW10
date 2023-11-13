// HW10 files
int second;
int i;

void setup() {
  for (i = 2; i<=11; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  second = int((floor(millis()/1000))) % 60;
  if (second>=0 && second<6) {
    for (i = 2; i<=11; i++) {
      if (i != 11) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  } else if (second>=6 && second<12) {
    for (i = 2; i<=11; i++) {
      if (i != 10) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  } else if (second>=12 && second<18) {
    for (i = 2; i<=11; i++) {
      if (i != 9) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  } else if (second>=18 && second<24) {
    for (i = 2; i<=11; i++) {
      if (i != 8) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  } else if (second>=24 && second<30) {
    for (i = 2; i<=11; i++) {
      if (i != 7) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  } else if (second>=30 && second<36) {
    for (i = 2; i<=11; i++) {
      if (i != 6) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  } else if (second>=36 && second<42) {
    for (i = 2; i<=11; i++) {
      if (i != 5) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  } else if (second>=42 && second<48) {
    for (i = 2; i<=11; i++) {
      if (i != 4) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  } else if (second>=48 && second<54) {
    for (i = 2; i<=11; i++) {
      if (i != 3) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  } else {
    for (i = 2; i<=11; i++) {
      if (i != 2) {
        digitalWrite(i, LOW);
      } else {
        digitalWrite(i, HIGH);
      }
    }
  }
}
