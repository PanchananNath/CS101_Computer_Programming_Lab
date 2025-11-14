//Write a C program to swap two int variables using a third variable.

#include <stdio.h>

int main() {
    int p,r,t;
    float si;
    printf("Enter Principal:");
    scanf("%d",&p);
    printf("Enter Rate of Interest:");
    scanf("%d",&r);
    printf("Enter Time:");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("Simple Interest = %.2f",si);

    return 0;
}