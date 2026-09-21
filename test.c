#include <stdio.h>
#include <ctype.h>

int main(){

    char ch;
    int counter= 0;
    int largest = 0;
    printf("Input some words: ");

    while((ch=getchar()) != '\n' && ch != EOF){
        if (isspace(ch)){
            if (counter>0){
                printf("%d\n",counter);
                if (counter >largest){
                    largest = counter;
                }
                counter = 0;
            }
        }
        else{
                counter++;
            }
    }
    if (counter>0){
        printf("%d\n",counter);
         if (counter >largest){
            largest = counter;
            }
    }
    printf("The largest length is %d",largest );
    printf("Done");


    return 0;
}
