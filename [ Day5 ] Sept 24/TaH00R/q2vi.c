#include <stdio.h>

int main() {
    int n = 7;
    int k = 1;
    for(int i = 0; i < n; i+=2){
        for(int j = 0; j<=i;j++){
            if(k == 1){
                printf("%d ",k);
                k = 0;
            }
            else{
                printf("%d ",k);
                k = 1;
            }
        
        }
    printf("\n");
    }
    for(int i = 0; i < n-2; i+=2){
    for(int j = n-2; j>i;j--){
                if(k == 1){
                printf("%d ",k);
                k = 0;
            }
            else{
                printf("%d ",k);
                k = 1;
            }
        }
    printf("\n");
    }
    return 0;
}