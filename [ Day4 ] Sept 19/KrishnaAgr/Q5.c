#include <stdio.h>
int main() {
  int a ,  b;
  
  printf("Enter a range\n");
  printf("Enter lower bound:");
  scanf("%d" , &a);
  printf("Enter upper bound:");
  scanf("%d" , &b);
  int i = a + 1;
  while(i < b) {
    int j = 2;
    int isPrime = 1;
  while(j*j <= i) {
  if(i % j == 0) {
    isPrime = 0;
    break;
    
  } 
  
  j++;
} 
if(i > 1 && isPrime) {
  printf("%d\n", i);
}
    
    i++;
  }

  
  return 0;
}