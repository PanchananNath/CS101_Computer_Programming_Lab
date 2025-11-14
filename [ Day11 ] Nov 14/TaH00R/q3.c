#include <stdio.h>
#include <stdlib.h>

struct P {
    char c;
    float f;
};

struct S {
    int i;
    struct P p;
};

int main() {
    struct S s1;
    printf("Enter an integer: ");
    scanf("%d", &s1.i);
    printf("Enter a character: ");
    scanf(" %c", &s1.p.c);
    printf("Enter a float: ");
    scanf("%f", &s1.p.f);

    printf("\nEntered Integer: %d\n", s1.i);
    printf("Entered Character: %c\n", s1.p.c);
    printf("Entered Float: %.2f\n", s1.p.f);
    return 0;
}