/*Leap year - Divisible by 4 but not by 100 or Divisible by 400*/
#include <stdio.h>

int main() {
    int year;
    printf("Enter Year:");
    scanf("%d",&year);

    if (year%4 == 0 && year%100 != 0){
        printf("Leap Year");}
    else if(year%400 ==0){
        printf("Leap Year");
    }

    else{
        printf("Not a Leap Year");
    }
    return 0;
}