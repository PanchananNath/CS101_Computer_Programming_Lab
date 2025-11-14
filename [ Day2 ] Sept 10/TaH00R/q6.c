//Write a program in C to swap two int variables without using a third variable.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first integer: "); 
    scanf("%d", &a);
    printf("Enter second integer: "); 
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}