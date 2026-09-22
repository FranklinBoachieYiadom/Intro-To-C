#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    FILE *file;
    
    file = fopen("testfile.txt", "w"); // The w here means write, we have r,w,a (read, write and append)

    if (file == NULL)
    {
        printf("There was an error with the file");
        return 1;
    }

    printf("The file was opened sucessfully");

    char name[20] = "Kofi";
    int age = 17;
    
    fprintf(file, "Whats up %s\nyou are %d, years today", name, age);

    fclose(file);
    return 0;
}
