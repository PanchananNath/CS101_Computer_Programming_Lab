#include <stdio.h>
#include <stdlib.h>
int main() {
  int* ptr;
  int n;
  printf("Enter the size of the array you want to enter: ");
  scanf("%d" , &n);
  ptr = (int *)malloc(n * sizeof(int));
  for(int i = 0 ; i < n ; i++) {
    printf("Enter element %d of array: " , i);
    scanf("%d" , &ptr[i]);
  }
  for(int i = 0 ; i < n ; i++) {
    printf("%d" , ptr[i]);
  }

  return 0;
}