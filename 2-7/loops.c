
// Compile with -std=c11 flag so that variable-initialization in loops works

#include <stdio.h>
#include <MyroC.h>
#include <eSpeakPackage.h>

void beep5(void)
{
  
  for (int i = 0; i<5; i++)
    {
    rBeep(1, 932);
    }
}


void computeAverageLight(void)
{
  int x = 0; //average light
    for (int i = 0; i<10; i++)
    {
      x = x + rGetLightTxt("left", 10 );
    }
    x = x/10;

    printf( "%d\n", x  );
}

void walkWhileLight()
{
  int x = rGetLightTxt("left", 10 );
  printf( "%d\n", x  );
  while( 65000 >= x )
    {
      
      x = rGetLightTxt("left", 10 );
      rForward( 1.0, 1.0);

    }

}

void spiral()
{
    for (double i = 1; i<=5; i++)
    {
      rForward( i/5, 1.0);
      rTurnLeft(.75, 1.0);
      rForward( i/5, 1.0);
      rTurnLeft(.75, 1.0);
      rForward( i/5, 1.0);
      rTurnLeft(.75, 1.0);
      rForward( i/5, 1.0);
      rTurnLeft(.75, 1.0);
    }
}



int main(void) {
  rConnect("/dev/rfcomm0");
  rSetForwardness( "fluke-forward");
  // computeAverageLight();
  // beep5();
  // spiral();
  while(0==0)
    {
  walkWhileLight();
    }
  rDisconnect();
    return 0;
}
