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
  int smallest = num[0];
  for(int j = 1; j < n ; j++) {
    if(smallest < num[j]) {
      smallest = num[j];
    }
  }
  printf("The greatest number is:%d" , smallest);
  return 0;
}