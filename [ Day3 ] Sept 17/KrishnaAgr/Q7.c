#include <stdio.h>
int main() {
  int num;
  int num1;
  
  printf("ENTER 3 DIGIT NUMBER:");
  scanf("%d" , &num);
  num1 = num;
  int a1 = num % 10;
  num = num / 10;
  int a2 = num % 10;
  num = num / 10;
  int a3 = num % 10;
  num = num / 10;

  //printf("%d , %d , %d" , a1 , a2 , a3);
  int sum = (a1*a1*a1) + (a2*a2*a2) + (a3*a3*a3);
  if(num1 == sum) {
    printf("Yes the number is an armstrong number");
  } else {printf("It is not an armstrong number");
  }
  //printf("%d" , sum);


  return 0;
}