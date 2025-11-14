#include <stdio.h>

void checkPrime(int num){
    int check = 0;
    if (num < 2) {
        printf("Cannot be determined\n");
        return;
    }
    if (num == 2) {
        printf("Prime, 1\n");
        return;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            check = 1;
            break;
        }
    }
    if (check) {
        printf("Not Prime, 0\n");
    } else {
        printf("Prime, 1\n");
    }
}
int main() {
    int num;
    printf("Enter The Number to be Checked: ");
    scanf("%d",&num);
    checkPrime(num);
    return 0;
}