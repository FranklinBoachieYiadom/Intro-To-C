#include <stdlib.h>
#include <stdio.h>

// Reading from a file  and also writing to a file

int main(void){

    FILE *file;
    file= fopen("testfile.txt","r");  // Since we are reading from an existing file

    if (file==NULL){
        printf("Problem opening file.....");
        return 1;
    }

    char name[82];       // for the strings in the file
    int age, id;          //for the age and id, which are integer values

    while(!feof(file)){             // this is the EOF- End of file, so while we are not at the end of file
        fscanf(file, "%s %d %d", name, &age,  &id );         //The fscanf here gets each string and stores it in the the variable
        printf("The name records are: %s, %d, %d\n", name, age, id);            //Here after, we can display it to the console
    }

    fclose(file);              // We always remember to close it
    return 0;
}


//This is reading from one file and writing it to another file

// You can uncomment the code and comment the first code to check it out

// #include <stdlib.h>
// #include <stdio.h>

// int main(){
//     FILE *infile;
//     FILE *outfile;

//     infile = fopen("intestfile.txt", "r");
//     outfile = fopen("outtestfile.txt", "w");

//     if (infile == NULL || outfile == NULL){
//         printf("Problem reading the files");
//         return 1;
//     }

//     char name[82];
//     int age, id;

//     while (!feof(infile)){
//         fscanf(infile, "%s %d %d", name, &age, &id);
//         fprintf (outfile, "%s %d %d\n", name, age, id);
//         printf("The records are: %s, %d, %d\n", name, age, id);
//     }
//     fclose(infile);
//     fclose(infile);
//     return 0;
// }
