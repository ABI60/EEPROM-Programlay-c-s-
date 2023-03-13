#include "config.h"
#include "project_definitions.h"

/**
 * Initializes mcu and I/O related settings
 */
void init(){
    
    //Configure the internal oscillator(32MHz)
    OSCCONbits.SCS = 0b00;
    OSCCONbits.IRCF = 0b1110;
    OSCCONbits.SPLLEN = 1;
    
    //Set all pins as digital IO
    ANSELA = 0x00;
    ANSELB = 0x00;   
    
    //Disable the pull-up on MCLR pin
    WPUEbits.WPUE3 = 0;
    
    //Microcontroller programming pins
    TRISBbits.TRISB6 = 0;
    TRISBbits.TRISB7 = 0;
    
    //WE tris bit
    WE_TRIS = 0; WE_LAT = 1;
    //OE tris bit
    OE_TRIS = 0; OE_LAT = 1;
    
    //Address tris bits
    A0_TRIS = 0;
    A1_TRIS = 0;
    A2_TRIS = 0;
    A3_TRIS = 0;
    A4_TRIS = 0;
    A5_TRIS = 0;
    A6_TRIS = 0;
    A7_TRIS = 0;
    A8_TRIS = 0;
    A9_TRIS = 0;
    A10_TRIS = 0;
    setAddress(0);
    
    //IO tris bits
    IO0_TRIS = 0;
    IO1_TRIS = 0;
    IO2_TRIS = 0;
    IO3_TRIS = 0;
    IO4_TRIS = 0;
    IO5_TRIS = 0;
    IO6_TRIS = 0;
    IO7_TRIS = 0;
    setIO(0);
    
    //LED tris bit
    LED_TRIS = 0;
    statusLed(1);
    
    //Delay to make sure the EEPROM is ready or incase of reset by the user
    __delay_ms(1000);
}
