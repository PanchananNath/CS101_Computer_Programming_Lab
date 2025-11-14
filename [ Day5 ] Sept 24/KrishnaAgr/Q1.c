#include <stdio.h>
#include <math.h>

int main () {

  int x;
  printf("Enter X:");
  scanf("%d" , &x);
  float sum = 1;
  int multiply = 1;
  int n;
  printf("Enter n:");
  scanf("%d" , &n);

  for(int i = 1; i <= n; i++) {
    multiply = multiply*i;
    sum = sum + pow(x , i)/(multiply);
  }
  printf("%f" ,sum);


  return 0;
}