#include <stdio.h>

int main() {
    int n = 4;
    for(int i = 0; i < n; i++){
        int k = 1;
        for(int j = n; j>i;j--){
            printf("%d",k);
            k++;
        }
    printf("\n");
    }
    return 0;
}