#include <stdio.h>
void checkPrime(int a , int b) {
  for(int i = a ; i <= b ; i++) {
    int isPrime = 1;
    for(int j = 2 ; j * j <= i ; j++) {
      if(i % j == 0) {
        isPrime = 0;
        break;
      } 
    }
    if(isPrime == 1) {
      printf("%d\n" , i);
    }
  }
}
int main() {
 checkPrime(5,10);
  return 0;
}