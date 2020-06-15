
#include "includes.h"


int main( void )
{
  System sys;
  sys.init();
  while(true)
  {
    P1OUT |= BIT0;
    __delay_cycles(5000);
    P1OUT &= ~BIT0;
    __delay_cycles(5000);
  }
}
