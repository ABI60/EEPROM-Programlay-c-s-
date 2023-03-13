#include "config.h"
#include "project_definitions.h"

#pragma warning disable 520


void main( void ){
    
    /*
     * Initialization
     */
    init();
    while(BTN_PORT == 1);
    statusLed(0);
    
    /*
     * Write your code below
     * - "writeByte" can be used to write to an address
     * - "readByte()" can be used to error check or read
     * - "statusLed(2)" can be used to blink the LED on
     * error(infinite loop, button press will reset th device)
     */
    
    unsigned char value = 128;
    for(unsigned int i = 0; i < 255; i++){
        writeByte(value, i);
        value >>= 1;
        if(value == 0)value = 128;
    }
    
    /*
     * End of your code
     */
    RESET();
return;}