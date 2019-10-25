# ADC128S102 SPI Driver

A Library for ADC128S102 using hardware SPI. This should be compatible with any Arduino up to 16Mhz

## Usage

Connect ADC128S102 hardware as per the datasheet (See Documentation section for link), add the ADC128S102 library to your project and follow this simple example:

```
#include "ADC128S102.h"
ADC128S102 aDC128S102;

void setup() {
  aDC128S102.begin();
}

void loop() {
  int adcValue = aDC128S102.readADC(0); // change to any channel from 0-7
  Serial.println(adcValue);
}
```

## Documentation

`ADC128S102` Datasheet

http://www.ti.com/lit/ds/symlink/adc128s102.pdf

## LICENSE
Copyright 2019 Bachta

This project is licensed under the MIT license - see the [LICENSE.md](LICENSE.md) file for details
