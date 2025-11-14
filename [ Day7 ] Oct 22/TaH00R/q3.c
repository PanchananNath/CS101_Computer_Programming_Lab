#include <stdio.h>
#include <stdlib.h>

void countSetBits(int num){
    int count = 0;
    while(num!=0){
        if (num%2 == 1) count++;
        num/=2;
    }
    printf("%d",count);
}

int main() {
    int n;
    printf("Enter Value of n: ");
    scanf("%d",&n);
    countSetBits(n);
    return 0;
}