/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1939
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
bool request = false;

void I2C_Slave_Init(void);

void main(void) {
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();


    //I2C_SlaveSetIsrHandler(I2C_Slave_Read_Write_interruption);

    I2C_Slave_Init();


    while (1) {

        if (BP_GetValue() == 0) {

            REL1_SetLow();
            REL2_SetLow();
            REL3_SetLow();
            REL4_SetLow();
            REL5_SetLow();
            REL6_SetLow();
            REL7_SetLow();
            REL8_SetLow();


        } else {



        }
    }
}

void I2C_Slave_Init() {
    SSPADD = 50; // Adresse de l'esclave
    SSPCON = 0b00110110; // Configure le module MSSP en mode I2C esclave avec l'accusé de réception de la correspondance d'adresse
    SSPCON2 = 0;
    SSPSTAT = 0x80; // Slew rate control disabled for standard speed mode (100kHz)
    TRISC3 = 1; // SCL en entrée
    TRISC4 = 1; // SDA en entrée
    GIE = 1; // Active les interruptions globales
    PEIE = 1; // Active les interruptions périphériques
    SSPIE = 1; // Active les interruptions MSSP
}

void __interrupt() I2C_Slave_Read_Write() {
    REL8_SetHigh();
    if (SSPIF) {
        SSPIF = 0;
        if (SSPOV || WCOL) {
            SSPOV = 0; // Clear the overflow flag
            WCOL = 0; // Clear the collision flag
            return;
        }

        if (!D_nA && !R_nW) // If last byte was an address + Write
        {
            unsigned char temp = SSPBUF; // Read the buffer to clear BF
            CKP = 1; // Release the clock
            REL7_SetHigh();
        } else if (!D_nA && R_nW) // If last byte was an address + Read
        {
            unsigned char temp = SSPBUF; // Read the buffer to clear BF
            SSPBUF = 0x55; // Load the buffer with the data to be sent
            CKP = 1; // Release the clock
            REL6_SetHigh();
        } else if (D_nA && !R_nW) // If data byte + Write
        {
            REL5_SetHigh();
            unsigned char temp = SSPBUF; // Read the buffer to clear BF
            CKP = 1; // Release the clock
            if (temp == 88) {

                REL1_SetHigh();
            }

            if (temp == 77) {

                REL2_SetHigh();
            }

        } else if (D_nA && R_nW) // If data byte + Write
        {
            REL3_SetHigh();
            unsigned char temp = SSPBUF; // Read the buffer to clear BF
            CKP = 1; // Release the clock
            if (temp == 88) {

                REL1_SetHigh();
                SSPBUF = 0x55; // Load the buffer with the data to be sent
                CKP = 1; // Release the clock
            }

            if (temp == 77) {

                REL2_SetHigh();
                SSPBUF = 0x99; // Load the buffer with the data to be sent
                CKP = 1; // Release the clock
            }

        }
    }
}

/**
 End of File
 */