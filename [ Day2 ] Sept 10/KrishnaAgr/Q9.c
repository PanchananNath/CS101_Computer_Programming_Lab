#include <stdio.h>
int main() {
  int n,d1,d2,d3;
  printf("Enter a integer with atmost 3 digit: ");
  scanf("%d" , &n);
  d1 = n / 100;
  d2 = (n / 10)% 10;
  d3 = n % 10;
  
  int rev;
  rev = d3+d2+d1;
  printf("%d" , rev);

  return 0;
}