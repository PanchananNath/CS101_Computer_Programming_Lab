#include <stdio.h>

int main() {
    int rows = 4;
    int stars, spaces;
    for (int i = 0; i < rows; i++) {
        spaces = rows - i - 1;
        stars = 2 * i + 1;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}