#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a Number:");
    scanf("%d", &a);


    if (a%2 == 0) {
        printf("%d is even\n", a);
        printf("E");
    } else {
        printf("%d is odd\n", a);
        printf("O");
    }

    return 0;
}