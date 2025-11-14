#include <stdio.h>
#include <math.h>

int getNthDigit(int num , int place) {
   for(int i = 2 ; i <= place ; i++) {
    num = num / 10;
  }
  num = num % 10;
  return num;
}


int main() {
  int k , j;
  scanf("%d" , &k);
  scanf("%d" , &j);
  printf("%d" , getNthDigit(k , j));

  return 0;
}