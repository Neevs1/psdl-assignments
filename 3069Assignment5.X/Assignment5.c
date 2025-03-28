/*
 * File:   Assignment5.c
 * Author: student
 *
 * Created on 24 January, 2025, 11:39 AM
 */


#include <xc.h>

void main(void) {
    int A[] = { 0x34,0x0A,0x15,0x2B};
    //in ascending order
      for(int i =0;i<4;i++){
        for(int j=0;j<4-i-1;j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                
            }

        }
    }
    int b[] = { 0x34,0x0A,0x15,0x2B};
    //in descending order
      for(int i =0;i<4;i++){
        for(int j=0;j<4-i-1;j++){
            if(b[j]<b[j+1]){
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
                
            }

        }
    }
    
    return;
}
