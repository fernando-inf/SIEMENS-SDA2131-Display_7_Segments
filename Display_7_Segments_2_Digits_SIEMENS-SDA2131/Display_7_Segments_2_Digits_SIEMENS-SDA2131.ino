//SIEMENS SDA2131 & Display 7 Segments: 2 Digits
//fernando-inf@hotmail.com

int digitRight = 0;
int bank = 0;

const int DATA = 12;    // D12 Pin DATA SIEMENS-SDA2131
const int CLOCK = 11;   // D11 Pin CLOCK 
const int ENABLE = 10;  // D10 Pin ENABLE

const int BUTTON_PIN = 2; //D2  Button

byte numRight[] = { B10110111, B00100100, B01110011, B01110110, B11100100, B11010110, B11010111, B10110100, B11110111, B11110110 };
//{....0....,.....1....,.....2....,.....3....,....4.....,....5.....,.....6....,.....7....,.....8....,.....9....}
//B-f-g-b-a-dp-c-d-e / Digit Right- 0 =LED Off

byte numLeft[] = { B11101101, B00100100, B11001110, B01101110, B00100111, B01101011, B11101011, B00101101, B11101111, B01101111 };
//{....0....,.....1....,.....2....,.....3....,....4.....,....5.....,.....6....,.....7....,.....8....,.....9....}
//B-e-d-c-dp-a-b-g-f / Digit Left
