#include <stdio.h>

void Power(int num){
int check = 1;
int power = 1;
while(check){
    power*=2;
    if(power == num || power>num){
        printf("Smallest Power of 2 Greater or Equal to %d is %d",num,power);
        check = 0;
    }
}
}
int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    Power(num);
    return 0;
}