#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,EvenSum = 0,OddSum = 0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int num[1000];

    for(int i = 0; i<n; i++){
        int temp;
        printf("Enter Value at Index %d: ",i);
        scanf("%d",&num[i]);
    }

    for(int i = 0; i<n; i++){
        if (num[i]%2 == 0){
            EvenSum+=num[i];
        }
        else OddSum+=num[i];
    }
    printf("Sum of Even Elements is %d\n", EvenSum);
    printf("Sum of Odd Elements is %d\n", OddSum);
}