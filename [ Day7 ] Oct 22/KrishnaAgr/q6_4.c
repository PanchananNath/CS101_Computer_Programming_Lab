#include <stdio.h>
int main() {
  int n;
  printf("Enter number of elements you want to enter in array :");
  scanf("%d" , &n);
  int num[n];
  for(int i = 0 ; i < n ; i++) {
    printf("ENTER no. %d :" , i+1);
    scanf("%d" , &num[i]);
  }
  int sum = 0;
  for(int j = 1; j <= n ; j++) {
    sum += num[j-1];
  }
  printf("sum:%d" , sum);
  return 0;
}