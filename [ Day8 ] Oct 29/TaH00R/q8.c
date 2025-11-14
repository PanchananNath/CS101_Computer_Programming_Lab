#include <stdio.h>
#include <stdlib.h>

void multiply(int m1[2][2],int m2[3][2]){
    int result[2][2];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            result[i][j] = 0;
            for(int k = 0; k<2; k++){
                result[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i = 0; i<2;i++){
        for(int j = 0; j<2; j++){
            printf("%d\n",result[i][j]);
        }
    }
}

int main() {
    int m1[2][2] = {1,2,3,4};
    int m2[3][2] = {1,2,4,2,1,2};
    multiply(m1,m2);
    return 0;
}