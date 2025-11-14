#include <stdio.h>
int main() {
  int arr[] ={1,2,3,4,5,6};
  int n;
  int count = 1;
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Enter the sum you want: ");
  scanf("%d" , &n);
  for(int i = 0; i < size ; i++) {
    for(int j = count;j<size;j++) {
      if(arr[i] + arr[j] == n) {
        printf("%d %d \n" , arr[i] ,arr[j] );
      }
    }
    count++;
  }

  return 0;
}