#include <stdio.h>
int greatest(int a, int b, int c) {
  if(a > b && a > c) {
    return a;
  }
  else if(b > a && b > c) {
    return b;
  } else{return c;}
}
int main() {
  printf("%d",greatest(2,3,4));
  return 0;
}