#include <stdio.h>

void LeadingDigit(int num){
    int temp = num;
    while(temp>9){
        temp/=10;
    }
    printf("Leading Digit is %d",temp);
}

int main() {
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);

    LeadingDigit(num);
    
    return 0;
}