#include <stdio.h>
#include <stdlib.h>

//Structs allow us to define types that group 
//different data items together into a single item.  
//This is different than arrays, which only let us 
//sequentially group things together of the same type.

//Note that the struct was declared before the int main
typedef struct
{
    int hour;
    int min;
    int sec;
    char AmOrPm;
} time;                     // Here is the name of the defined struct

int main()
{
    time period = {11, 43, 20, 'A'};          // we can initialize the struct this way, the period is the name given to the group
    time power= {12,3,4,'A'};                   // we can set all the values like this

    period.min = 27;                            //We can choose to set individual values like this

    printf("The hour is %i ", power.hour);
    printf("the minutes is %i ", period.min);
    printf("the sconds is %i ", period.sec);

    if (period.AmOrPm == 'P')
    {
        printf("PM\n");
    }
    else
    {
        printf("AM\n");
    }

    return 0;
}