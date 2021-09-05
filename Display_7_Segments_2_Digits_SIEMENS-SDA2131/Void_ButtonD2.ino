#include <Bounce2.h>  //Install Library Bounce2

Bounce2::Button button_upBank = Bounce2::Button();

void button1() {
  button_upBank.update();
  if (button_upBank.pressed()) {
    bank++;  // Increment Bank
    if (bank > 99) bank = 0;

    digitRight++;  // Increment number of digit right in the display
    if (digitRight > 9) digitRight = 0;
  }
}
