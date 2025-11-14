#include <stdio.h>

int main() {
    float celcius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) * 5/9;
    printf("Temperature in Celsius: %.2f\n", celcius);
    return 0;
}