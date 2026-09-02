#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int x,y,z;
    for (x=5; x>=0; x--){
        for (y= 0; y<x; y++){
            printf("+");  
        }
        for (z=0; z<5-x; z++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
