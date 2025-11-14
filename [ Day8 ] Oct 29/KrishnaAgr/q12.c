#include <stdio.h>
int main() {
  int arr1[] = {1 , 4 ,77, 89,98};
  int arr2[] = {5 , 10 , 57 , 200};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);
  int size3 = size1 + size2;
  int newarr[size3];
  for(int i = 0; i < size1; i++) {
    newarr[i] = arr1[i];
  }
  for(int i = size1; i < size3; i++) {
    newarr[i] = arr2[i - size1];
  }
  for(int i = 0 ; i< size3 ; i++) {
    for(int j = 0 ; j<size3-1 ; j++) {
      if(newarr[j] > newarr[j+1]) {
        int temp = newarr[j+1];
        newarr[j+1] = newarr[j];
        newarr[j] = temp;
      }
    }
  }
  for(int k = 0; k< size3 ; k++) {
    printf("%d " , newarr[k]);
  }
  
  return 0;
}