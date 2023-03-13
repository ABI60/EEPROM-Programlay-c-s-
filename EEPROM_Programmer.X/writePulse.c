#include "config.h"
#include "project_definitions.h"


/**
 * Pulses the write pin of the EEPROM
 */
void writePulse(){
    WE_LAT = 0;
    _delay(2);   //Delay of 250ns for (32MHz Fosc)
    WE_LAT = 1;
}
