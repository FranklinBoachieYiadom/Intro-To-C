#include <stdio.h>
#include <stdlib.h>


void double_array( int size1, int size2, int nums[size1][size2]){
    int i ,j;
    for (i = 0; i<size1; i++){
        for (j=0; j<size2; j++){
            printf("%2i ", nums[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int students[2][5] ={
        {1,2,3,4,5},
        {6,7,8,9,10}
    };
    double_array(2,5,students);

    return 0;
}