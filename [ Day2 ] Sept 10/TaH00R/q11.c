/*Write a program in C to find the maximum of two numbers without using IF statement.
Hint:
int max = a > b ? a : b;*/

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter First Number:");
    scanf("%d/n",&a);
    printf("Enter Second Number:");
    scanf("%d/n",&b);

    a > b ? printf("%d is greater than %d",a,b) : printf("%d is greater than %d",b,a);
    return 0;
}