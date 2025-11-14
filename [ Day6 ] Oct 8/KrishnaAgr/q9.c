#include <stdio.h>
int leadDigit(int a) {
  int digits[20] = {};
  int i=0;
  while(a != 0) {
    digits[i] = a % 10;
    a = a/10;
    i++;
  }
  
  printf("%d" , digits[i-1]);
}
int main() {
  leadDigit(596);
  return 0;
}