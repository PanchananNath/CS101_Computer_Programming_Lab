#include <stdio.h>

int main() {
    const float pi = 3.14;
    float circum;

    printf("Enter the circumference of Circle: ");
    scanf("%f", &circum);

    float radius = circum / (2 * pi);

    float area = pi * radius * radius;

    printf("Area of the Circle: %.2f\n", area);

    return 0;
}