#pragma once

/* ADC128S102 library by Bachta
 */

// This will load the definition for common Particle variable types
#include "Particle.h"
#include "Arduino.h"

// This is your main class that users will import into their application
class ADC128S102
{
public:
  /**
   * Constructor
   */
  ADC128S102();

  void begin();
  int readADC(int channel);

private:
  
};
