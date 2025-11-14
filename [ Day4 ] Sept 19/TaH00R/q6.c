#include <stdio.h>

int main() {
    int num, temp, sum, digit;
    printf("3-digit Armstrong numbers are:\n");
    for (num = 100; num <= 999; num++) {
        temp = num;
        sum = 0;
        while (temp != 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}