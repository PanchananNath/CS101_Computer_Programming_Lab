#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int num[1000];

    for(int i = 0; i<n; i++){
        int temp;
        printf("Enter Value at Index %d: ",i);
        scanf("%d",&num[i]);
    }
    

    for(int i = n-1; i>=0; i--){
        printf("Value at Index %d = %d\n",i, num[i]);
    }
    return 0;
}