#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,OddSum = 0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int num[1000];

    for(int i = 0; i<n; i++){
        int temp;
        printf("Enter Value at Index %d: ",i);
        scanf("%d",&num[i]);
    }

    for(int i = 0; i<n; i++){
        if (i%2 != 0){
            OddSum+=num[i];
        }
    }
    printf("Sum of Odd Indices is %d\n", OddSum);
}