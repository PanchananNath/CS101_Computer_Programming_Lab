#include <stdio.h>

int DigitstoBinary(int num) {
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    int binary[32];
    int i = 0;
    while (num > 0 && i < 32) {
        binary[i++] = num % 2;
        num /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
    return 0;
}

int main() {
    int k;
    scanf("%d" , &k);
    DigitstoBinary(k);
    return 0;
}