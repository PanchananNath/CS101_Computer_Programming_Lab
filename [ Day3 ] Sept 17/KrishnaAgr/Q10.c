#include <stdio.h>
int main() {
int num1 , num2 , num3;

  printf("Enter No1:");
  scanf("%d" , &num1);
  printf("Enter No2:");
  scanf("%d" , &num2);
  printf("Enter No3:");
  scanf("%d" , &num3);

  if(num1 > num2 && num1 > num3 && num2 > num3) {
    printf("The greatest is %d\n" , num1);
    printf("The second greatest is %d" , num2);
  }
  else if(num1 > num2 && num1 > num3 && num2 < num3) {
    printf("The greatest is %d\n" , num1);
    printf("The second greatest is %d" , num3);
  }
  else if(num2 > num1 && num2 > num3 && num1 > num3) {
    printf("The greatest is %d\n" , num2);
    printf("The second greatest is %d" , num1);
  }
  else if(num2 > num1 && num2 > num3 && num1 < num3) {
    printf("The greatest is %d\n" , num2);
    printf("The second greatest is %d" , num3);
  }
  
  else if(num2 > num1){
    printf("The greatest is %d\n" , num3);
    printf("The second greatest is %d" , num2);
  }
  else if(num2 < num1){
    printf("The greatest is %d\n" , num3);
    printf("The second greatest is %d" , num1);
  }
 
  return 0;
}