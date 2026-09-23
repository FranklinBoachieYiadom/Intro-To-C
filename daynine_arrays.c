#include <stdio.h>
#include <stdlib.h>

int main()
{
   int even_nums[20];  // This is setting an array of size 20
  // For this program, we are trying to get first 20 even numbers.

   int i,j;

    for (i = 0; i < 20; i++){
        even_nums[i] = i * 2;
    }

    for(j= 0; j< 20; j++){
       printf("even_num[%i]: %i\n", j,even_nums[j]);        //No that j is the counter and even_nums[j], will give you the content of the index of that particular counter
    }

//This Program, we ask a user to type in a list of characters that will be stored in an array, then,
//we would ask the user to select between 1 and n, then based on what the user selected, we 
//displace the item in the array space

    int n = 6;
    char arr[n];

    int klizer;

    for (klizer= 0; klizer < n; klizer++){
        printf("\nEnter your character[%i]:",klizer+1);
        scanf("\n%c", &arr[klizer]);
    }

    int user_input;
    printf("\nPlease input any number between 1 and %i to view the character stored in that space: ",n);
    scanf("%i", &user_input);

    int index= user_input-1;
    printf("\nThe value in %i is %c\n", user_input , arr[index]);


    
//This is a two dimensional array

    int row = 3;
    int col = 4;
    int array[row][col];

    int starter = 100;

    int p, k;
    
    for (p= 0; p < row; p++){
        for(k = 0; k < col; k++){
            array[p][k] = starter;
            starter++;
        }
    }
//Here we want to show the values that have been stored in the array
    for (p=0; p < row; p++){
        for(k =  0; k < col; k++){
            printf("%5i ", array[p][k]);
        }
        printf("\n");
    }

    return 0;
}