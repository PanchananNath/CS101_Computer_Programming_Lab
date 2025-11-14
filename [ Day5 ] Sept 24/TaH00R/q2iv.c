#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 0; i<n;i++){
        for(int j = 0;j<i;j++){
            printf(" ");
        }
        int k = n - i;
        for(int l = 0;l<n - i;l++){
            printf("%d",k);
            k--;
        }
        printf("\n");
    }
    return 0;
}