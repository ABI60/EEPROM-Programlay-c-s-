#include "config.h"
#include "project_definitions.h"


/**
 * Configures the status LED\n
 * 
 * - When blink LED is chosen, the program can be reset by holding down the button
 * 
 * @param value: 0-> Red LED on, 1-> Green LED on, 2-> Blink LED(infinite loop)
 */
void statusLed(char value){
    if(value == 0){
        LED_LAT = 0;
    }
    else if(value == 1){
        LED_LAT = 1;
    }
    else if(value == 2){
        while(1){
            LED_LAT = 1;
            __delay_ms(250);
            LED_LAT = 0;
            __delay_ms(250);
            if(BTN_PORT == 0)RESET();
        }
    }
}