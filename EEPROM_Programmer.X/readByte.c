#include "config.h"
#include "project_definitions.h"


/**
 * Reads the byte from the given address and returns it
 * @param address: Address to be read
 * @return 8-bit value
 */
unsigned char readByte(unsigned int address){
    setMode(1);           //Set EEPROM to read mode
    setAddress(address);  //Select the address
    _delay(2);            //Delay of 250ns  (32MHz Fosc)
    return readIO();      //Read the I/O pins and return the result
}