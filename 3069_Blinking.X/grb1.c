/*
 * File:   grb1.c
 * Author: Neevan Redkar
 *
 * Created on 27 January, 2025, 1:22 PM
 * Edited on 14 February, 2025, 10:27 AM
 * Kit Implementation on 21 February, 2025, 10:28 AM
 */
 #include <xc.h>
 #pragma config FOSC = HS //Oscillator Selection
 #pragma config WDT = OFF //Disable Watchdog timer
 #pragma config LVP = OFF //Disable Low Voltage Programming
 #pragma config PBADEN = OFF //Disable PORTB Analog inputs

 void msdelay (unsigned int time);//Function for delay
 void main(void) {
     
  INTCON2bits.RBPU=0;
  ADCON1 = 0x0F; //To disable the all analog inputs
  TRISD = 0x00; //To configure PORTD as output
  while (1){//While loop for repeated operation
    PORTD = 0xFF; //Turn ON the all LEDs
    msdelay(250); // Delay
    PORTD = 0x00; //Turn OFF the all LEDs
    msdelay(250); // Delay
 }
 return;
 }
 void msdelay (unsigned int time){
 unsigned int i, j;
 for (i = 0; i < time; i++){
 for (j = 0; j < 710; j++); //Calibrated for a 1 ms delay in MPLAB
 }
 }