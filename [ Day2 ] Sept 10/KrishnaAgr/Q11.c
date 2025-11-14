#include <stdio.h>
int main()
{
  int num1 , num2;
 printf("Enter Number 1:");
 scanf("%d" , &num1);
 printf("Enter Number 2:" , &num2);
 scanf("%d" , &num2);

 num1 > num2 ? printf("Max is %d" , num1) : printf("Max is %d" , num2);
}