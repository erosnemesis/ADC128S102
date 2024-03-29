/* ADC128S102 library by Bachta
 */

#include "ADC128S102.h"
#include "SPI.h"

/**
 * Constructor.
 */
ADC128S102::ADC128S102()
{}

/**
 * Use this in the setup() method to initialize the hardware and begin SPI if it hasn't already.
 */
void ADC128S102::begin()
{
    // initialize hardware
    pinMode(SS, OUTPUT);
    SPI.begin();
    SPI.setClockSpeed(16, MHZ);
}

/**
 * Supply the channel number to read the Analog value converted to 12-bit
 */
int16_t ADC128S102::readADC(int8_t channel){

    SPI.beginTransaction(settings);
    digitalWrite(SS, LOW); // Drive Slave Select LOW to select chip
    
    byte control = channel << 3; // DONTC DONTC ADD2 ADD1 ADD0 DONTC DONTC DONTC
    buffer = SPI.transfer(control);
    buffer = buffer << 8;
    buffer = buffer | SPI.transfer(0);

    digitalWrite(SS, HIGH); // Drive Slave Select HIGH so other hardware can use SPI
    SPI.endTransaction();

    return buffer;
}
