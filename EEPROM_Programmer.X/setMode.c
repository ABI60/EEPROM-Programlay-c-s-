#include "config.h"
#include "project_definitions.h"


/**
 * Configures the connection mode
 * @param mode: 0-> Programming mode, 1-> Reading mode
 */
void setMode(unsigned char mode){
    if(mode == 0){
        //Disable the OE of EEPROM first
        //Then configure the I/O pins output
        OE_LAT = 1;
        IO0_TRIS = 0;
        IO1_TRIS = 0;
        IO2_TRIS = 0;
        IO3_TRIS = 0;
        IO4_TRIS = 0;
        IO5_TRIS = 0;
        IO6_TRIS = 0;
        IO7_TRIS = 0;
    }
    else if(mode == 1){
        //Configure the I/O pins as input first
        //Then enable the OE of EEPROM
        IO0_TRIS = 1;
        IO1_TRIS = 1;
        IO2_TRIS = 1;
        IO3_TRIS = 1;
        IO4_TRIS = 1;
        IO5_TRIS = 1;
        IO6_TRIS = 1;
        IO7_TRIS = 1; 
        OE_LAT = 0;
    }
}