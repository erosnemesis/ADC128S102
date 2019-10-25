#pragma once

/* ADC128S102 library by Bachta
 * This class defines the driver for the ADC128S102 Analog to Digital converter.
 * This class only uses hardware SPI and must be wired as such. No bit-banging here.
 */

// This will load the definition for common Particle variable types
#include "Particle.h"
#include "Arduino.h"

#define ADC_COUNTS  (1<<12)

class ADC128S102
{
public:
  /**
   * Constructor
   */
  ADC128S102();

  void begin();
  int16_t readADC(int8_t channel);

private:
  SPISettings settings = SPISettings(14000000, MSBFIRST, SPI_MODE2);

  int16_t buffer;
};
