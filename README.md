# Display 7 Segments (2 Digits) whit SIEMENS-SDA2131
<img src="https://raw.githubusercontent.com/fernando-inf/SIEMENS-SDA2131-Display_7_Segments/main/Display_7_Segments_2_Digits_SIEMENS-SDA2131/Other/datasheet.png" width="100%"></img>
shiftOut is currently written to output 1 byte (8 bits) so it requires a two step operation to output values larger than 255:
``
  digitalWrite(ENABLE, HIGH);
  shiftOut(DATA, CLOCK, LSBFIRST, numRight[i]);
  shiftOut(DATA, CLOCK, MSBFIRST, numLeft[x]);
  digitalWrite(ENABLE, LOW);``
  
For more view:

https://www.arduino.cc/reference/es/language/functions/advanced-io/shiftout/

# Recycling of an old TV

<img src="https://github.com/fernando-inf/SIEMENS-SDA2131-Display_7_Segments/blob/main/Display_7_Segments_2_Digits_SIEMENS-SDA2131/Other/IMG_0219.JPG" width="100%"></img>
<img src="https://raw.githubusercontent.com/fernando-inf/SIEMENS-SDA2131-Display_7_Segments/main/Display_7_Segments_2_Digits_SIEMENS-SDA2131/Other/IMG_0222.JPG" width="100%"></img>
<img src="https://raw.githubusercontent.com/fernando-inf/SIEMENS-SDA2131-Display_7_Segments/main/Display_7_Segments_2_Digits_SIEMENS-SDA2131/Other/IMG_0224.JPG" width="100%"></img> 
<img src="https://raw.githubusercontent.com/fernando-inf/SIEMENS-SDA2131-Display_7_Segments/main/Display_7_Segments_2_Digits_SIEMENS-SDA2131/Other/IMG_0237.JPG" width="100%"></img> 
