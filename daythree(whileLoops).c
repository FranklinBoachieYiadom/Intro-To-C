#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double num, sqr;
    printf("Input a number: ");
    scanf("%lf",&num);
    //While the number is positive, we find the square root, we quite when we receive a negative
    while(num>0 ){
        sqr= sqrt(num);
        printf("The square of %g is %g",num,sqr);
        printf("\nInput a number or negative to quite: ");
        scanf("%lf",&num);
    }
    printf("Good bye!!");

    return 0;
}



// While loops

