#include <stdio.h>

int main() {
    int a,b,smaller,gcd;
    printf("Enter First Value: ");
    scanf("%d",&a);
    printf("Enter Second Value: ");
    scanf("%d",&b);

    if(a>b){
        smaller = b;
    }
    else{
        smaller = a;
    }

    for(int i = 1; i <= smaller;i++){
        if (a%i == 0 && b%i==0){
            gcd = i;
        }
    }

    printf("GCD is %d",gcd);
    
    return 0;
}