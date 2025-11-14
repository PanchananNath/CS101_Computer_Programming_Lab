#include <stdio.h>

int main() {
    int a;
    printf("Enter a Number:");
    scanf("%d", &a);

    if (a%7 == 0 || a%13 == 0) {
        printf("%d is divisible by 7 or 13\n", a);
    } else {
        printf("%d is not divisible by 7 or 13\n", a);
    }

    return 0;
}