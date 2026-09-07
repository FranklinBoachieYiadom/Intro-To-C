#include <stdio.h>
#include<stdlib.h>
#include <math.h>


// This is the structure of the do while loop,
// now the program below only end when a negative or zero value has been inputed.

int main(){
    int input_num, squared;
    do {
        printf("Please enter an Integer: ");
        scanf("%i",&input_num);
        squared = input_num * input_num;
        printf("The number square is %i\n", squared);
    }
    while (input_num>0);
    printf("done");
    return 0;
}
