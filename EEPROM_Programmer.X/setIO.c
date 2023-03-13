#include "config.h"
#include "project_definitions.h"


/**
 * Sets the I/O pins to given 8-bit value
 * @param value: 8-bit value
 */
void setIO(unsigned char value){
    IO0_LAT = value & 1;
    value = value >> 1;
    IO1_LAT = value & 1;
    value = value >> 1;
    IO2_LAT = value & 1;
    value = value >> 1;
    IO3_LAT = value & 1;
    value = value >> 1;
    IO4_LAT = value & 1;
    value = value >> 1;
    IO5_LAT = value & 1;
    value = value >> 1;
    IO6_LAT = value & 1;
    value = value >> 1;
    IO7_LAT = value & 1;    
}