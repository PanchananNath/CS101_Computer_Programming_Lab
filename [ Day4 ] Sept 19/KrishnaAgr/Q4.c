#include <stdio.h>
int main() {
  int num;
printf("Enter a number:");
scanf("%d" , &num);
int i = 2;
while(i <= num) {
  if(num % i == 0 && i != num) {
    printf("It is not prime");
    break;
  } else{
    printf("it is a prime number");
    break;
  }
} 

  return 0;
}