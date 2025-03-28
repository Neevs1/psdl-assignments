/*
 * File:   A4.c
 * Author: Neevan Redkar
 *
 * Created on 24 January, 2025, 11:13 AM
 */


#include <xc.h>

void main(void) {
    //multiplication using operator
    int a= 0x07,b=0x08;
    int c=a*b;
    TRISA=0;
    PORTA=c;
    //multiplication using successive addition
    int d=0;
    for(int i=0;i<b;i++){
        d=d+a;
    }
    TRISB=0;
    PORTB=d;
    //division using operator
   int x=0x10;
    int y=0x05;
    int e = x/y;
    TRISC=0;
    PORTC=e;
    //division using successive division
    int f=0;
    while(x>=y){
        x-=y;
        f++;
    }
    TRISD=0;
    PORTD=f;
    return;
}
