//Write a program in C to reverse a three-digit positive integer. For instance, if the
//number is 132, the output needs to be 231. Do not use any loop construct.
//Similar as Q10

#include <stdio.h>

int main() {
    int num, a,b,c;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    a = num%10;
    b = (num/10)%10;
    c = num/100;
    printf("Reversed Number: %d%d%d\n", a,b,c);
    return 0;
}