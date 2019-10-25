/* ADC128S102 library by Bachta
 */

#include "ADC128S102.h"
#include "SPI.h"

/**
 * Constructor.
 */
ADC128S102::ADC128S102()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void ADC128S102::begin()
{
    // initialize hardware
    pinMode(SS, OUTPUT);
    SPI.begin();
    SPI.setBitOrder(MSBFIRST);
    SPI.setDataMode(SPI_MODE2);
}

int ADC128S102::readADC(int channel){
    digitalWrite(SS, LOW);
    //SPI.transfer( 0x01 );
    int hi = SPI.transfer( (channel << 3 ));
    int lo = SPI.transfer( 0 );
    digitalWrite(SS, HIGH);

    return (hi << 8) | lo;
}
