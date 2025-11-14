#include <stdio.h>
int main() {

  int arr[] = {1,92,63,-4,544,60,78,18,99};
  int size = sizeof(arr) / sizeof(arr[0]);
  for(int i = 0; i < size ; i++) {
    for(int j = 0 ; j < size-1 ; j++) {
      if(arr[j] > arr[j+1]) {
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(int k = 0 ; k < size ; k++) {
    printf("%d " , arr[k]);
  }
  printf("The second largest element is %d" , arr[size-2]);

}