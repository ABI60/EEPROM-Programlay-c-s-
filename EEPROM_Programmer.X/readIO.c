#include "config.h"
#include "project_definitions.h"


/**
 * Reads the I/O pins and returns the combined 8-bit value\n
 * 
 * - Should be used after EEPROM is set to read mode
 * 
 * @return 8-bit reading
 */
unsigned char readIO(){
    unsigned char result = 0;
    result += (IO0_PORT);
    result += (IO1_PORT << 1);
    result += (IO2_PORT << 2);
    result += (IO3_PORT << 3);
    result += (IO4_PORT << 4);
    result += (IO5_PORT << 5);
    result += (IO6_PORT << 6);
    result += (IO7_PORT << 7);    
    return result;
}