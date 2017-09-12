/* TowerPro SG5010 Micro Servo (SG5010) [D032] : http://rdiot.tistory.com/282 [RDIoT Demo] */

#include <Servo.h>

Servo towerprosg5010; 
int pos = 0; 

void setup()
{
  towerprosg5010.attach(9); 
}

void loop()
{
  for(pos = 0; pos < 180; pos += 1)  // 0 to 180 degrees with 1 degree step
  {                                  
    towerprosg5010.write(pos);  
    delay(120);                       // time set 120 ms to reach slowly
  }
}
