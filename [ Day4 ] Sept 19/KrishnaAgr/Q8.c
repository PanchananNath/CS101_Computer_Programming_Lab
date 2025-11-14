#include <stdio.h>
int main() {

  int n;
  int x;
  int multiply = 1;
  printf("enter x:");
  scanf("%d" , &x);
  printf("enter n:");
  scanf("%d" , &n);

  for(int i = 1 ; i <= n ; i++) {
    multiply = multiply * x;

  }
  printf("%d" , multiply);

  

  return 0;
}