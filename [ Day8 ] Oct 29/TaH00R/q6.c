#include <stdio.h>
#include <stdlib.h>

int main() {
    int array1[2][2] = {1,2 , 2,1};
    int array2[2][2] = {2,3 , 3,2};

    int difference[2][2];

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            difference[i][j] = array1[i][j] - array2[i][j];
        } 
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d\n", difference[i][j]);
                } 
    }
    return 0;
}