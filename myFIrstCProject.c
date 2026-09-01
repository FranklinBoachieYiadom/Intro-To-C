#include <stdio.h>
#include <stdlib.h>

int main (){
    // setvbuf(stdout, NULL, _IONBF, 0)   This is a kinda small hack for I/O       

   //Declaring all the data types studied today.
   
    char ch;
    int num;
    double d;
    float f;
    _Bool no = 0; // This is False
    _Bool yes = 1; // This is True, any number here, makes it True.

    // Asking the user to input and see the various inputs scanner types
    //Note that, \n takes us to a new line, and also when assigning a character, use single quotes ''
    
    //For Single characters:
    printf("Please input your character: ");
    scanf("%c", &ch);
    printf("The character you typed is %c\n",ch); 

    // For integers:
    printf("Input an integer: ");
    scanf("%i",&num);     // For user input, you need to have an ampersandbefore the variable
    printf("The integer value you inputed is %i\n", num);

    // For doubles:
    printf("Input a double data type number: ");
    scanf("%lf",&d);    // We could have used %f, but $lf(long float), is mostly good for doubles
    printf("The double value you inputed  is %g\n", d);  // The %g is generally used to format the output values for floats and doubles 

    //For Floats:
    printf("Please input a floating point number: ");
    scanf ("%f", &f);
    printf("The value of the float is %g\n", f);

    //To display the value of our booleans
    printf("The value of True is any number aside 0, that is: %i\n", yes);
    printf("The value of False is the number \'o\', that is: %i\n", no);

    return 0;
}