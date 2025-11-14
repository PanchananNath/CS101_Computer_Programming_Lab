#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n;
    int digits = 0;
    int sum = 0;
    int temp = n;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == original;
}
void printArmstrong(int a, int b) {
    printf("Armstrong numbers between %d and %d are:\n", a, b);
    for(int i = a; i <= b; i++) {
        if(isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int a, b;
    printf("Enter range (a b): ");
    scanf("%d %d", &a, &b);

    printArmstrong(a, b);

    return 0;
}
