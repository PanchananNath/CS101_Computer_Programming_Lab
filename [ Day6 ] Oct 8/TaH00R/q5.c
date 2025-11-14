#include <stdio.h>

void ArmstrongNumber(int a, int b){
for(a; a<b;a++){
   int temp = a,sum=0,digit;
    while(temp!=0){
        digit = temp%10;
        sum += digit*digit*digit;
        temp /= 10;
    }
if (sum == a){
    printf("%d\n",sum);
}
}
}

int main() {
    int a, b;
    printf("Enter Start Point: ");
    scanf("%d",&a);
    printf("Enter End Point: ");
    scanf("%d",&b);

    ArmstrongNumber(a,b);

    return 0;
}