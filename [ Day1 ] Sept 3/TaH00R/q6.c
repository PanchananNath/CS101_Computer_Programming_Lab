#include <stdio.h>

int main() {
    float l, w;

    printf("Enter length of rectangle: ");
    scanf("%f", &l);

    printf("Enter width of rectangle: ");
    scanf("%f", &w);

    float area = l * w;
    printf("Area of the rectangle: %.2f\n", area);

    return 0;
}