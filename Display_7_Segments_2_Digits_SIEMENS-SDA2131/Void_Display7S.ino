void displayNum(byte x, byte i) {//displayNum(digitLeft, digitRight)
  digitalWrite(ENABLE, HIGH);
  shiftOut(DATA, CLOCK, LSBFIRST, numRight[i]);
  shiftOut(DATA, CLOCK, MSBFIRST, numLeft[x]);
  digitalWrite(ENABLE, LOW);
}

void Display7S() {
  if (bank >= 0 && bank <= 9) {
    displayNum(0, digitRight);//displayNum(digitLeft, digitRight)
  }

  if (bank >= 10 && bank <= 19) {
    displayNum(1, digitRight);
  }

  if (bank >= 20 && bank <= 29) {
    displayNum(2, digitRight);
  }

  if (bank >= 30 && bank <= 39) {
    displayNum(3, digitRight);
  }

  if (bank >= 40 && bank <= 49) {
    displayNum(4, digitRight);
  }

  if (bank >= 50 && bank <= 59) {
    displayNum(5, digitRight);
  }

  if (bank >= 60 && bank <= 69) {
    displayNum(6, digitRight);
  }

  if (bank >= 70 && bank <= 79) {
    displayNum(7, digitRight);
  }

  if (bank >= 80 && bank <= 89) {
    displayNum(8, digitRight);
  }

  if (bank >= 90 && bank <= 99) {
    displayNum(9, digitRight);
  }
}
