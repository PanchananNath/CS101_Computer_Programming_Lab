#include<stdio.h>
#include<math.h>

int main() {
    int a,r;
    printf("Enter Number:");
    scanf("%d",&a);
    int sum = 0;
    int b = a;
    int temp = 0;

    while(b!=0){
        temp +=1;
        b/=10;
 }
   b = a;
    while(b!=0){
        r= b%10;
        sum +=pow(r,temp);
        b/=10;
 }
    if (sum == a){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
    return 0;
}