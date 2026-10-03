#include <stdio.h>
#include <math.h>
#include <limits.h>


void function1(int temp){
    printf("Hello there\n");
    printf("The current temperature is %i",temp);
}

int main(){
    int temp;
    printf("%i",INT_MAX);
    printf("Please input the value for temp: ");
    scanf("%i",&temp);
    function1(temp);
    return 0;
}




// 3. Write a function, _Bool isPrime(int n), which indicates whether 
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