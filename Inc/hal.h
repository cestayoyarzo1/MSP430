

//******************
// CLASS: HAL
//
// DESCRIPTION:
//  HAdrware Abstraction layer
//
// CREATED: 6/13/2020, by Carlos Estay
//
// FILE: hal.h
//
class HAL
{
public:
  HAL();
  ~HAL();
  static void init();
  static void clock();
  static void timers();
  
};