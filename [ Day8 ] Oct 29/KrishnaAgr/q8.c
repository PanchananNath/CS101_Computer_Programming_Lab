#include <stdio.h>
int main() {
  int arr1[2][2] ={1,2,3,4};
  int arr2[2][2] ={5,6,7,8};
  int arr3[2][2];
  int sum = 0;
  for(int i = 0 ;i < 2 ; i++ ) {
    for(int j = 0 ; j < 2 ; j++) {
      for(int k = 0 ; k < 2 ; k++) {
        sum+= arr1[i][k] * arr2[k][j];
      }
      arr3[i][j] = sum;
      sum = 0;
    }
  }
  for(int k = 0 ; k < 2 ; k++) {
    for(int l = 0 ; l < 2 ; l++) {
      printf("%d " , arr3[k][l]);
    }
    printf("\n");
  }
  return 0;
}