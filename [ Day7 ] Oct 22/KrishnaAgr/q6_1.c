#include <stdio.h>
int main() {
  int n;
  printf("Enter number of elements you want to enter in array :");
  scanf("%d" , &n);
  int num[n];
  for(int i = 1 ; i <=n ; i++) {
    printf("ENTER no. %d :" , i);
    scanf("%d" , &num[i]);
  }
  for(int j = n; j > 0 ; j--) {
    printf("%d\n" , num[j]);
  }
  return 0;
}