#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y;
} Coords;

typedef struct
{
    int r, g, b;
} Color;

typedef struct
{
    int radius;
    Coords center;
} Circle;

int main()
{
    Color white = {255, 255, 255};
    Color blue = {255, 255, 0};
    Color black = {0, 0, 0};

    Coords cent = {4, 4};

    Circle round;
    round.radius = 4;
    round.center = cent;

    return 0;
}

// Create a new BankCustomer structure type, which keeps track of customer ID,
// type of account (‘c’ for checking, ‘s’ for savings, ‘d’ for deposit),
// and account balance.  Declare an array of 10 such customers, and read in
// their data from this file.  At the end, write out:
// The average balance for all checking accounts,
// The average balance for all savings accounts, and
// The average balance for all deposit accounts.

// #include <stdio.h>

// typedef struct
// {
//     int customer_id;
//     char account_type;
//     int account_balance;
// } BankCustomer;

// int main()
// {
//     FILE *file;

//     file = fopen("customers.txt", "r");

//     if (file == NULL)
//     {
//         printf("Error opening file");
//         return 1;
//     }
//     printf("File opened sucessfully\n");

//     BankCustomer customer[9];      //created a customer array to hold

//     int i = 0;
//     while (!feof(file) && i != 10)
//     {
//         fscanf(file, "%i %c %i", &customer[i].customer_id, &customer[i].account_type, &customer[i].account_balance);
//         printf("%i, %c, %i\n", customer[i].customer_id, customer[i].account_type, customer[i].account_balance);
//         i++;
//     }

//     int avg_checking = 0;
//     double avg_counter = 0;
//     for (i = 0; i < 10; i++)
//     {
//         if (customer[i].account_type == 'c')
//         {
//             avg_checking = avg_checking + customer[i].account_balance;
//             avg_counter++;
//         }
//     }
//     printf("The average balance for all checking accounts is: %.2lf", avg_checking / avg_counter);

//     fclose(file);
//     return 0;

//     return 0;
// }