#include <stdio.h>
#include <stdlib.h>

int getNthDigit(int num, int index){
    for(int i = 0; i<index; i++){
        num = num/10;
    }
    return num%10;
}

int main() {
    int n,x;
    printf("Enter Value of n: ");
    scanf("%d",&n);
    printf("Enter Index Value: ");
    scanf("%d",&x);
    printf("%d",getNthDigit(n, x));
    return 0;
}