#include <stdio.h>
int main() {

  int num;
  printf("Enter a number");
  scanf("%d" , &num);
  if(num % 13 == 0 &&  num % 7 == 0) {
    printf("it is divisible by both 13 and 7");
  }
  else if(num % 7 == 0) {
    printf("it is divisible by 7");
  }
  else if(num % 13 == 0) {
    printf("it is divisible by 13");
  }
  
  return 0;
}