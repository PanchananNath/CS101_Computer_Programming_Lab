#include <stdio.h>

int main() {
    int a = 7, b = 5, c = 0, d = 5, result = 0;

    result = a + b;
    printf("%d\n", result);

    result = a * b;
    printf("%d\n", result);

    result = (a < b);
    printf("%d\n", result);


    result = (d >= b);
    printf("%d\n", result);

    return 0;
}