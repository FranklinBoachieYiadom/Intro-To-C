#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){
    int num ;
    printf("Input a number: ");
    scanf("%i",&num);

//The if and else if and else control structure
    if (num>7){
        printf("The num is greater than seven\n");
    }
    else if(num>3 && num>=5) {
        printf("The number is less than seven\n");
    }
    else{
        printf("None of the above\n");
    }

 //The switch case control structure
    char grade = 'B';
    switch(grade){
        case 'A':
            printf("Excellent work done!!!");
            break;
        case 'B':
            printf("Good work done!!");
            break;
        case 'C':
            printf("Fairly ok job done!!");
            break;
        default:   //Note that there should always be the default
            printf("The grade value is missing");
            break;
    }

    return 0;
}