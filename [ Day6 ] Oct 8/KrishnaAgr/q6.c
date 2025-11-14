#include <stdio.h>
void checkPerfect(int a , int b) {

  for( a ; a <  b ; a++) {
    int a1 = a;
  int sum = 0;
  for(int i = 1 ; i<a1 ; i++) {
    if(a1 % i == 0) {
      sum += i;
    }

  }
  if (sum == a1) {
    printf("%d\n" , a1);
  }
}
}
int main() {
  checkPerfect(1,500);
  return 0;
}