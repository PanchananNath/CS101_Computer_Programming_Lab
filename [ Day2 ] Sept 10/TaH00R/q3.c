/*Write a program in C to extract the individual digits of a given number (a positive/*integer) and add them. Assume the number has at most 3 digits. Do not use anyloop construct*/
//Similar as Q9
#include <stdio.h>

int main() {
    int num, a,b,c, sum;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    a = num%10;
    b = (num/10)%10;
    c = num/100;
    printf("Extracted Digits: %d %d %d\n", c, b, a);
    sum = a + b + c;
    printf("Sum of Digits: %d\n", sum);
    return 0;
}