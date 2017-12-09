#include "LedControl.h";

LedControl lc=LedControl(12,11,10,1);

// pin 12 is connected to the MAX7219 pin 1 - Data In
// pin 11 is connected to the CLK pin 13
// pin 10 is connected to LOAD pin 12
// 1 as we are only using 1 MAX7219

void setup()
{
  // the zero refers to the MAX7219 number, it is zero for 1 chip
  lc.shutdown(0,false);// turn off power saving, enables display
  lc.setIntensity(0,5);// sets brightness (0~15 possible values)
  lc.clearDisplay(0);// clear screen
}
void loop()
{
  lc.setLed(0,0,2,true);
  lc.setLed(0,0,3,true);
  lc.setLed(0,0,4,true);
  lc.setLed(0,0,5,true);

  lc.setLed(0,1,1,true);
  lc.setLed(0,1,6,true);

  lc.setLed(0,2,0,true);
  lc.setLed(0,2,2,true);
  lc.setLed(0,2,5,true);
  lc.setLed(0,2,7,true);


  lc.setLed(0,3,0,true);
  lc.setLed(0,3,7,true);
  

  lc.setLed(0,4,0,true);
  lc.setLed(0,4,2,true);
  lc.setLed(0,4,5,true);
  lc.setLed(0,4,7,true);

  lc.setLed(0,5,0,true);
  lc.setLed(0,5,3,true);
  lc.setLed(0,5,4,true);
  lc.setLed(0,5,7,true);

  lc.setLed(0,6,1,true);
  lc.setLed(0,6,6,true);

  lc.setLed(0,7,2,true);
  lc.setLed(0,7,3,true);
  lc.setLed(0,7,4,true);
  lc.setLed(0,7,5,true);
   delay(1000);


//schimb fata
  lc.setLed(0,4,2,false);
  lc.setLed(0,4,5,false);
  lc.setLed(0,5,3,false);
  lc.setLed(0,5,4,false);
  //deschidem fata
  lc.setLed(0,4,3,true);
  lc.setLed(0,4,4,true);
  lc.setLed(0,5,2,true);
  lc.setLed(0,5,5,true);
  delay(1000);





   

//off
  lc.setLed(0,0,2,false);
  lc.setLed(0,0,3,false);
  lc.setLed(0,0,4,false);
  lc.setLed(0,0,5,false);

  lc.setLed(0,1,1,false);
  lc.setLed(0,1,6,false);

  lc.setLed(0,2,0,false);
  lc.setLed(0,2,2,false);
  lc.setLed(0,2,5,false);
  lc.setLed(0,2,7,false);


  lc.setLed(0,3,0,false);
  lc.setLed(0,3,7,false);
  

  lc.setLed(0,4,0,false);
  lc.setLed(0,4,2,false);
  lc.setLed(0,4,5,false);
  lc.setLed(0,4,7,false);

  lc.setLed(0,5,0,false);
  lc.setLed(0,5,3,false);
  lc.setLed(0,5,4,false);
  lc.setLed(0,5,7,false);

  lc.setLed(0,6,1,false);
  lc.setLed(0,6,6,false);

  lc.setLed(0,7,2,false);
  lc.setLed(0,7,3,false);
  lc.setLed(0,7,4,false);
  lc.setLed(0,7,5,false);


  lc.setLed(0,4,3,false);
  lc.setLed(0,4,4,false);
  lc.setLed(0,5,2,false);
  lc.setLed(0,5,5,false);
  delay(1000);
 
}

