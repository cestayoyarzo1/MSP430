#include "includes.h"


//-------------------------------------------------------------------Constructor
HAL::HAL()
{
}
//--------------------------------------------------------------------Destructor
HAL::~HAL()
{
  
}
//--------------------------------------------------------------------------Init
void HAL::init()
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;
  clock();  
  timers();
}
//-------------------------------------------------------------------------Clock
void HAL::clock()
{
  
  P1DIR |= BIT4;
  P1SEL |= BIT4;
  
  P1DIR |= BIT0;
  P1OUT |= BIT0;
}
//------------------------------------------------------------------------Timers
void HAL::timers()
{
  TA0CTL = 0;
  
}

//Interrupts
#pragma vector=TIMER0_A0_VECTOR
__interrupt void TimerA_ISR(void)
{
  
}


