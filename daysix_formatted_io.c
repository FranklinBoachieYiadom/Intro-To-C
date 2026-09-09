#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //This prints out characters directly
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    
    printf("\n");
    //This print out character ascii equivalent, when numbers are placed in
    putchar(70);
    putchar(60);
    putchar(51);
    putchar(63);
    putchar(33);

     printf("\n");
    //This is the getchar() function to get a character
    char ch ;
    ch = getchar();
    printf("The character u typed is %c", ch);

    printf("\n");
    // Printf Formatting and decimal places
    double pi = 4.123456789;
    printf("The value of PI is %f\n",pi);  //Here without the .10 its only going to show up to some numbers 
    printf("The value of PI is %.10f\n",pi);   //Here, the  .10 before the f shows to how many decimal places
    printf("The value of PI is %10f\n",pi); // Here the number before the f, gives a padding space of 5
    return 0;
}