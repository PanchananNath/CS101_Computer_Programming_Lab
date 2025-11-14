#include <stdio.h>
int main() {
    float a,b,c,d,e, avg;
    printf("Enter 5 Numbers: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    avg = (a+b+c+d+e)/5;

    printf("Average is: %.2f\n", avg);


    return 0;
}