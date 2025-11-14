#include <stdio.h>

int main() {
    int a;
    printf("Enter 3-Digit Number:");
    scanf("%d",&a);

    int a1,b1,c1;
    a1 = (a%100)/10;
    b1 = a%10;
    c1 = a/100;

    int sum = (a1*a1*a1) + (b1*b1*b1) + (c1*c1*c1);
    
    if (sum == a){
        printf("Armstrong Number");
    }
    else{
        printf("Not");
    }
    return 0;
}