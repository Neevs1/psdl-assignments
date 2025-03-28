/*
 * File:   newmain.c
 * Author: Neevan Redkar
 *
 * Created on 28 March, 2025, 10:34 AM
 */


//Expt.4: Relay ON and OFF using External Interrupt
#include <xc.h>
#pragma config FOSC = HS //Oscillator Selection
#pragma config WDT = OFF //Disable Watchdog timer
#pragma config LVP = OFF //Disable Low Voltage Programming
#pragma config PBADEN = OFF //Disable PORTB Analog inputs
void __interrupt(high_priority) switch_isr (void)
{
PORTBbits.RB2 = ~PORTBbits.RB2; //Toggle the RB2
INTCONbits.INT0IF=0; //Reset the interrupt flag
}
void main(){
ADCON1 = 0x0F; // Configuring PORT pins as digital I/O
TRISBbits.TRISB2 = 0; // Configuring the RB2 as output
PORTBbits.RB2 = 0; // Setting the initial value
TRISBbits.TRISB0=1; // Make INT0 pin as an input pin
INTCON2=0x00; // Interrupt detection on falling Edge
INTCONbits.INT0IF=0; // Clear INT0IF flag
INTCONbits.INT0IE=1; // Enable INT0 external interrupt
INTCONbits.GIE=1; // Enable Global Interrupt
while(1);
}