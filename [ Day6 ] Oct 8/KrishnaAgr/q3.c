#include <stdio.h>

int ArmstrongNumber(int num){
    int num1 = num,sum=0,digit;
    while(num1!=0){
        digit = num1%10;
        sum += digit*digit*digit;
        num1 /= 10;
    }
if (sum == num){
    return 1;
}
else{
    return 0;
}
}
int main() {
    int num;
    printf("Enter The Number to be Checked: ");
    scanf("%d",&num); 
    printf("%d",ArmstrongNumber(num)) ; 
    return 0;
}