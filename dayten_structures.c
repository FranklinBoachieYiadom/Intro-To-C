#include <stdio.h>
#include <stdlib.h>

//Structs allow us to define types that group 
//different data items together into a single item.  
//This is different than arrays, which only let us 
//sequentially group things together of the same type.

//Note that the struct was declared before the int main
typedef struct{
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





// *****************   Question:   *******************
// Create a struct with account, we should let the user input the following
// customerId, account type, balance, number of years the user will like to wait
// Based on the number of years the user will like to wait, then calculate interest
// In the user is saving account, then interest per year is 2percent, other accounts will 
// accrue just 1 percent

// Solution, you can comment all the code above and run the code below:


// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//     int customer_id;
//     int balance;
//     _Bool is_Savings;
//     double interest_rate;

// } account;

// int main()
// {
//     account my_account;

//     printf("What is your customer Id: ");
//     scanf("%i", &my_account.customer_id);

//     char savings; 
//     printf("Your account type Savings 'Y'/'N':");
//     scanf(" %c", &savings);


//     printf("What is your Initial Balance: ");
//     scanf("%i", &my_account.balance);

//     int years;
//     printf("How many years do you want to wait ");
//     scanf("%i", &years);


//     if (savings=='Y'||savings=='y'){
//         my_account.is_Savings=1;
//         my_account.interest_rate= 0.02;
//     }else{
//         my_account.is_Savings=0;
//         my_account.interest_rate= 0.01;
//     }

//     // Here since its a compounding interest rate, it keeps added up each year, with the new interest
//     int i;
//     for (i=0; i< years; i++){
//         my_account.balance = my_account.balance + (my_account.interest_rate * my_account.balance);
//     }

//     printf("Customer(%i)\nYour interest after %i years\nTotal balance is %i", my_account.customer_id, years, my_account.balance);

//     return 0;
// }


