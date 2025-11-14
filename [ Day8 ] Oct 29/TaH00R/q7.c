#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[2][2] = {-4,32, 1,-2};
    int transpose[2][2];

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            transpose[i][j] = array[j][i];
        } 
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d\n", transpose[i][j]);} 
    }
    return 0;
}