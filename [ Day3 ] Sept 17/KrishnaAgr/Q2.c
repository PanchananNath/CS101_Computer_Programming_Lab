#include <stdio.h>
int main() {
int num1 , num2 , num3;

  printf("Enter No1:");
  scanf("%d" , &num1);
  printf("Enter No2:");
  scanf("%d" , &num2);
  printf("Enter No3:");
  scanf("%d" , &num3);

  if(num1 > num2 && num1 > num3) {
    printf("The greatest is %d" , num1);
  }
  else if(num2 > num1 && num2 > num3) {
    printf("The greatest is %d" , num2);
  }else {
    printf("The greatest is %d" , num3);
  }
 
  return 0;
}