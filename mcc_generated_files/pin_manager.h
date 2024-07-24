/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1939
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set REL1 aliases
#define REL1_TRIS                 TRISAbits.TRISA0
#define REL1_LAT                  LATAbits.LATA0
#define REL1_PORT                 PORTAbits.RA0
#define REL1_ANS                  ANSELAbits.ANSA0
#define REL1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define REL1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define REL1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define REL1_GetValue()           PORTAbits.RA0
#define REL1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define REL1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define REL1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define REL1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set REL2 aliases
#define REL2_TRIS                 TRISAbits.TRISA1
#define REL2_LAT                  LATAbits.LATA1
#define REL2_PORT                 PORTAbits.RA1
#define REL2_ANS                  ANSELAbits.ANSA1
#define REL2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define REL2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define REL2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define REL2_GetValue()           PORTAbits.RA1
#define REL2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define REL2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define REL2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define REL2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set REL3 aliases
#define REL3_TRIS                 TRISAbits.TRISA2
#define REL3_LAT                  LATAbits.LATA2
#define REL3_PORT                 PORTAbits.RA2
#define REL3_ANS                  ANSELAbits.ANSA2
#define REL3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define REL3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define REL3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define REL3_GetValue()           PORTAbits.RA2
#define REL3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define REL3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define REL3_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define REL3_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set REL4 aliases
#define REL4_TRIS                 TRISAbits.TRISA3
#define REL4_LAT                  LATAbits.LATA3
#define REL4_PORT                 PORTAbits.RA3
#define REL4_ANS                  ANSELAbits.ANSA3
#define REL4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define REL4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define REL4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define REL4_GetValue()           PORTAbits.RA3
#define REL4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define REL4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define REL4_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define REL4_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set REL5 aliases
#define REL5_TRIS                 TRISAbits.TRISA4
#define REL5_LAT                  LATAbits.LATA4
#define REL5_PORT                 PORTAbits.RA4
#define REL5_ANS                  ANSELAbits.ANSA4
#define REL5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define REL5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define REL5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define REL5_GetValue()           PORTAbits.RA4
#define REL5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define REL5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define REL5_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define REL5_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set REL6 aliases
#define REL6_TRIS                 TRISAbits.TRISA5
#define REL6_LAT                  LATAbits.LATA5
#define REL6_PORT                 PORTAbits.RA5
#define REL6_ANS                  ANSELAbits.ANSA5
#define REL6_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define REL6_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define REL6_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define REL6_GetValue()           PORTAbits.RA5
#define REL6_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define REL6_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define REL6_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define REL6_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set REL7 aliases
#define REL7_TRIS                 TRISAbits.TRISA6
#define REL7_LAT                  LATAbits.LATA6
#define REL7_PORT                 PORTAbits.RA6
#define REL7_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define REL7_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define REL7_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define REL7_GetValue()           PORTAbits.RA6
#define REL7_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define REL7_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set REL8 aliases
#define REL8_TRIS                 TRISAbits.TRISA7
#define REL8_LAT                  LATAbits.LATA7
#define REL8_PORT                 PORTAbits.RA7
#define REL8_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define REL8_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define REL8_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define REL8_GetValue()           PORTAbits.RA7
#define REL8_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define REL8_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set BP aliases
#define BP_TRIS                 TRISDbits.TRISD7
#define BP_LAT                  LATDbits.LATD7
#define BP_PORT                 PORTDbits.RD7
#define BP_ANS                  ANSELDbits.ANSD7
#define BP_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define BP_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define BP_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define BP_GetValue()           PORTDbits.RD7
#define BP_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define BP_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define BP_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define BP_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/