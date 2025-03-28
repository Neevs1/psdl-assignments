/*
 * File:   Assignment3.c
 * Author: Neevan Redkar
 *
 * Created on 24 January, 2025, 10:12 AM
 */


#include <xc.h>

void main(void) {
int source1[] = { 0x21,0x22, 0x23, 0x24, 0x25 };
int dest[] = {0x99, 0x99,0x99,0x99,0x99};
int i,temp;
for(i=0;i<5;i++)
{
temp = source1[i];
source1[i] = dest[i];
dest[i] = temp;
}

int source2[]={ 0x21,0x22, 0x23, 0x24, 0x25 };
int dest2[5];
for(i=0;i<5;i++){
    dest2[i]=source2[i];
}
return;
}
