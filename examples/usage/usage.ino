// Example usage for ADC128S102 library by Bachta.

#include "ADC128S102.h"

// Initialize objects from the lib
ADC128S102 aDC128S102;

void setup() {
    // Call functions on initialized library objects that require hardware
    aDC128S102.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    aDC128S102.process();
}
