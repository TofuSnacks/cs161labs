
#include <stdio.h>
#include <MyroC.h>
#include <eSpeakPackage.h>

int main(void) {
  rConnect("/dev/rfcomm0");
  rSetForwardness( "fluke-forward");
   rTurnLeft( 1.0, 1.0);
  // rTurnRight( 1.0, 1.0); I was told not to turn left/right by PM because
  //                        the robot was being weird
  rForward( .5, 2.0);
  rBackward( .5, 2.0);
  rTurnLeft( 1.0, 2.0);
  rForward( 1.0 , 1.0);
  rStop();
  rDisconnect();
    return 0;
}
