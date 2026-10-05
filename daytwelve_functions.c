#include <stdio.h>
#include <stdlib.h>

//To use void funtion, then it means your function is not returning any
//value, but if youf function is return a value, then you use
//a datatype, like int, double, struct, etc


void print_temp_value(int temp)
{
    temp = temp + 5;
    printf("The current temperature is:  %i\n", temp);
    //return (temp);
}

int main()
{
    int temperature = 20;
    print_temp_value(temperature);
    printf("Second value after func call: %i\n", temperature);
    printf("*******Note that********* the value of the second print after the function print_temp_value was executed, didnt not, this is because, for other data structures aside arrays, its pass by value, this means that, when a value changes for a function, it does not affect the function, unlike arrays, which is pass by reference, when a function's value changes, it affects the value of the function, I hope this is clear!!!");

    return 0;
}

// Uncomment for the question below
//********** Question to solve *******************
// Write a function, _Bool isPrime(int n), which indicates whether
// or not the given integer n is a prime number. You may assume that
// the user will only call the function with value n > 1.

// #include <stdio.h>
// #include <math.h>

// _Bool isPrime(int n){
//     _Bool isPrime = 1;
//     int i;
//     if (n<2){
//         isPrime = 0;
//     }
//     else{
//         for (i= 2; i<=sqrt(n); i++){
//             if (n % i==0){
//                 isPrime = 0;
//             }
//         }
//     }
//     return isPrime;
// }
// int main(){
//     int number;
//     printf("Please input a prime number: ");
//     scanf("%i",&number);
//     if (isPrime(number) == 1){
//         printf("The number you gave is a prime number");
//     }else{
//         printf("The number you gave is NOT A prime number");
//     }

//     return 0;
// }

// *********** This is an example of a 2-dimention array *****************
// NOTE: Arrays are ****passed by reference****, which means that when a value
// is changed in its function, it replaces it in the new array completely,
// arrays use void in declaring their functions
// unlike the other data structures like STRUCTS, DOUBLES, INT, ETC
// that are all ****passed by value****, where if a value is changed by the
// fuction, it does not affect the value in the other new function declared

// #include <stdio.h>
// #include <stdlib.h>

// void double_array( int size1, int size2, int nums[size1][size2]){
//     int i ,j;
//     for (i = 0; i<size1; i++){
//         for (j=0; j<size2; j++){
//             printf("%2i ", nums[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int students[2][5] ={
//         {1,2,3,4,5},
//         {6,7,8,9,10}
//     };
//     double_array(2,5,students);

//     return 0;
// }