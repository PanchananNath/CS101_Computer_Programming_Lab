#include <stdio.h>
int main()
{
  int num;
  int numSum;
  int d1, d2, d3;
  printf("Enter a number");
  scanf("%d", &num);
  d1 = num % 10;

  num = num / 10;

  d2 = num % 10;

  num = num / 10;

  d3 = num % 10;

  num = num / 10;

  numSum = d1  + d2  + d3;

  printf("%d", numSum);
}