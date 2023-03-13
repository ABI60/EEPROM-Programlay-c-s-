#ifndef PROJECT_DEFINITIONS_H
    #define	PROJECT_DEFINITIONS_H

    //Tris bits
    #define  WE_TRIS   TRISCbits.TRISC2
    #define  OE_TRIS   TRISCbits.TRISC1

    #define  LED_TRIS  TRISCbits.TRISC5

    #define  IO0_TRIS  TRISCbits.TRISC6
    #define  IO1_TRIS  TRISCbits.TRISC7
    #define  IO2_TRIS  TRISBbits.TRISB0
    #define  IO3_TRIS  TRISBbits.TRISB5
    #define  IO4_TRIS  TRISBbits.TRISB4
    #define  IO5_TRIS  TRISBbits.TRISB3
    #define  IO6_TRIS  TRISBbits.TRISB2
    #define  IO7_TRIS  TRISBbits.TRISB1

    #define  A0_TRIS   TRISAbits.TRISA0
    #define  A1_TRIS   TRISAbits.TRISA1
    #define  A2_TRIS   TRISAbits.TRISA2
    #define  A3_TRIS   TRISAbits.TRISA3
    #define  A4_TRIS   TRISAbits.TRISA4
    #define  A5_TRIS   TRISAbits.TRISA5
    #define  A6_TRIS   TRISAbits.TRISA7
    #define  A7_TRIS   TRISAbits.TRISA6
    #define  A8_TRIS   TRISCbits.TRISC4
    #define  A9_TRIS   TRISCbits.TRISC3
    #define  A10_TRIS  TRISCbits.TRISC0

    //LAT bits
    #define  WE_LAT    LATCbits.LATC2
    #define  OE_LAT    LATCbits.LATC1
  
    #define  LED_LAT   PORTCbits.RC5
  
    #define  IO0_LAT   LATCbits.LATC6
    #define  IO1_LAT   LATCbits.LATC7
    #define  IO2_LAT   LATBbits.LATB0
    #define  IO3_LAT   LATBbits.LATB5
    #define  IO4_LAT   LATBbits.LATB4
    #define  IO5_LAT   LATBbits.LATB3
    #define  IO6_LAT   LATBbits.LATB2
    #define  IO7_LAT   LATBbits.LATB1
  
    #define  A0_LAT    LATAbits.LATA0
    #define  A1_LAT    LATAbits.LATA1
    #define  A2_LAT    LATAbits.LATA2
    #define  A3_LAT    LATAbits.LATA3
    #define  A4_LAT    LATAbits.LATA4
    #define  A5_LAT    LATAbits.LATA5
    #define  A6_LAT    LATAbits.LATA7
    #define  A7_LAT    LATAbits.LATA6
    #define  A8_LAT    LATCbits.LATC4
    #define  A9_LAT    LATCbits.LATC3
    #define  A10_LAT   LATCbits.LATC0
  
    //PORT bits  
    #define  BTN_PORT    PORTEbits.RE3

    #define  IO0_PORT  PORTCbits.RC6
    #define  IO1_PORT  PORTCbits.RC7
    #define  IO2_PORT  PORTBbits.RB0
    #define  IO3_PORT  PORTBbits.RB5
    #define  IO4_PORT  PORTBbits.RB4
    #define  IO5_PORT  PORTBbits.RB3
    #define  IO6_PORT  PORTBbits.RB2
    #define  IO7_PORT  PORTBbits.RB1

    //Function prototypes
         void statusLed(char);
         void setAddress(unsigned int);
         void setIO(unsigned char);
unsigned char readIO(void);
         void setMode(unsigned char);
         void writePulse(void);
         void writeByte(unsigned char, unsigned int);
unsigned char readByte(unsigned int);

#endif