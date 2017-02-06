
#include <stdio.h>
#include <MyroC.h>
#include <eSpeakPackage.h>

int main(void) {
  rConnect("/dev/rfcomm0");
  rSetForwardness( "fluke-forward");
  rForward( .5, 2.0);

  if( rGetIRTxt ("left", 10) == 1 )
    {
  rTurnLeft( 1.0, 1.0);
  rForward( 1.0 , 2.0);
  rTurnRight( 1.0,1.0);
  rForward( 1.0 , 2.0);
  rTurnRight( 1.0,1.0);
  rForward( 1.0 , 2.0);
  rTurnLeft( 1.0, 1.0);
  rForward( 1.0 , 2.0);
    }
  rStop();
  rDisconnect();
    return 0;
}
