#include <stdio.h>

float area(float d){
    float r = d/2;
    return (3.14*r*r);
}

int main() {
    float d;
    printf("Enter Diameter of The Circle: ");
    scanf("%f",&d);
    printf("Area of the Circle:");
    printf("%.2f",area(d));
    return 0;
}