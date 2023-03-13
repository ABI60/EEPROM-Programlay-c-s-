#include "config.h"
#include "project_definitions.h"


/**
 * Configures the I/O pins to choose the given 11-bit address
 * @param address: 11-bit address
 */
void setAddress(unsigned int address){
    A0_LAT = address & 1;
    address = address >> 1;
    A1_LAT = address & 1;
    address = address >> 1;    
    A2_LAT = address & 1;
    address = address >> 1;    
    A3_LAT = address & 1;
    address = address >> 1;      
    A4_LAT = address & 1;
    address = address >> 1;    
    A5_LAT = address & 1;
    address = address >> 1;    
    A6_LAT = address & 1;
    address = address >> 1;    
    A7_LAT = address & 1;
    address = address >> 1;    
    A8_LAT = address & 1;
    address = address >> 1;    
    A9_LAT = address & 1;
    address = address >> 1;    
    A10_LAT = address & 1;
}