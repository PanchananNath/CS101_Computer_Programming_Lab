#include <stdio.h>
int main() {
  int n,d1,d2,d3;
  printf("Enter a integer with 3 digit: ");
  scanf("%d" , &n);
  d1 = n % 10;
  n /= 10;
  d2 = n % 10;
  n /= 10;
  d3 = n % 10;
  
  int rev;
  rev = d1*100+d2*10+d3;
  printf("%d" , rev);

  return 0;
}