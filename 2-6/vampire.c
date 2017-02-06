#include <stdio.h>
#include <MyroC.h>
#include <eSpeakPackage.h>




int main(void) {
  rConnect("/dev/rfcomm0");
  rSetForwardness( "fluke-forward");
  int x = rGetLightTxt( "left", 10); //65k is no light, 63k is light
  printf( "%d", x);
  if( 64000 >= x )
    {
  
      rForward( 1.0, 1.0);




    }
  x = rGetLightTxt( "left", 10); //65k is  light, 63k is no light
      if( 64000 >= x)
        {
         
          rBackward( 1.0, 1.0);
          rTurnLeft( 1.0, 1.0);




        }
      x = rGetLightTxt( "left", 10); //65k is no light, 63k is light
          if( 64000 >= x)
            {
              rForward(1.0, 2.0);

              
            }
          

       
  rDisconnect();
    return 0;
}
