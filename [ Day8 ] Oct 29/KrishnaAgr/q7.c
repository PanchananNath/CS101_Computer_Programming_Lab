#include <stdio.h>
int main() {
  int arr[2][2] = {1,2,3,4};
  int arr1[2][2];
  for(int i = 0 ; i < 2; i++) {
    for(int j = 0; j < 2 ; j++) {
      int temp  = arr[i][j];
      arr1[i][j] = arr[j][i];
      arr1[j][i] = temp;
    }
  }
  for(int k = 0 ; k < 2 ; k++) {
    for(int l = 0 ; l < 2 ; l++) {
      printf("%d " , arr1[k][l]);
    }
    printf("\n");
  }

  return 0;
}