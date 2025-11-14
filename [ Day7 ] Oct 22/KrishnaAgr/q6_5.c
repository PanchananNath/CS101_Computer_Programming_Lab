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
    if(j % 2 == 0) sum += num[j-1];
  }
  printf("sum of odd indices:%d" , sum);
  return 0;
}