// Write a program that copies the contents of an input file,
// and writes them to another file.  The input and output file
// names should be provided by the user via the console at the beginning
// of the program.  Hint: Copy the files, character by character.

#include <stdio.h>
#include <stdlib.h>

int main(){

    char output[10];
    char input[10];

    printf("Give a name for the input file: ");
    scanf("%s",input);

    printf("Give a name for the output file: ");
    scanf("%s",output);

    FILE *outputfile;
    FILE *inputfile;

    inputfile = fopen("ama.txt","r");
    outputfile = fopen(output,"w");

    if (outputfile == NULL || inputfile== NULL){
        printf("Error opening the file");
        return 1;
    }

    char contents[81];

    while (!feof(inputfile)){
        fscanf(inputfile, "%s",contents);
        fprintf(outputfile, "%s ",contents);
        printf("%s ",contents);
    }

    fclose(outputfile);
    fclose(outputfile);

    return 0;
}