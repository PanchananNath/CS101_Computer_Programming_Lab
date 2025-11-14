#include <stdio.h>

void ArmstrongNumber(int num){
    int temp = num,sum=0,digit;
    while(temp!=0){
        digit = temp%10;
        sum += digit*digit*digit;
        temp /= 10;
    }
if (sum == num){
    printf("Armstrong Number, 1");
}
else{
    printf("Not an Armstrong Number, 0");
}
}
int main() {
    int num;
    printf("Enter The Number to be Checked: ");
    scanf("%d",&num); 
    ArmstrongNumber(num);   
    return 0;
}