#include <stdio.h>
int main() {
  int num1 , num2 , smaller;
  printf("enter num1:");
  scanf("%d" , &num1);
  printf("enter num2:");
  scanf("%d" , &num2);
 if(num1 >= num2) {
  smaller = num2;
 } else {
  smaller = num1;
 }
  for(int i = 2 ; i <= smaller ; i++) {
    if(num1 % i == 0 && num2 % i == 0) {
      printf("The GCD of %d and %d is:%d" , num1 , num2 , i);
    }
  }
  return 0;
}