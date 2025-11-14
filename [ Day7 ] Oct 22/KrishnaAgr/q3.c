#include <stdio.h>
int countSetBits(int n) {
  int count = 0;
  while(n > 0) {
    if(n % 2 == 1) {
      count++ ;
    }
    n = n / 2;
  }
  return count;
}

int main() {
  int n;
  scanf("%d" , &n);
printf("%d",countSetBits(n));
return 0;
}