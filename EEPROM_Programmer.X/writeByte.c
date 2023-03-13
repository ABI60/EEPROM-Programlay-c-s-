#include "config.h"
#include "project_definitions.h"


/**
 * Writes the given 8-bit value to the given 11-bit address
 * @param byte: 8-bit value (0-255)
 * @param address: 11-bit address (0-2047)
 */
void writeByte(unsigned char byte, unsigned int address){
    
    setMode(0);           //Set EEPROM to write mode
    setAddress(address);  //Select the address
    setIO(byte);          //Configure the I/O pins
    NOP();                //Delay of 125ns  (32MHz Fosc)
    writePulse();         //Give a write pulse
    __delay_ms(10);       //Data will be written within 10ms(from datasheet)
}