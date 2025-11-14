//ADDITION OF TWO MATRICES
#include <stdio.h>
int main() {
  int r,c;
  printf("Enter the order of the matrices:");
  scanf("%d %d" , &r , &c);
  int mat1[r][c];
  int mat2[r][c];
  int mat3[r][c];
  
  for(int i = 0 ; i<r ; i++) {
    for(int j = 0; j<c;j++) {
      int n;
      printf("mat1(%d%d):",i,j);
      scanf("%d" , &n);
      mat1[i][j] = n;
    }
  }

  for(int i = 0 ; i<r ; i++) {
    for(int j = 0; j<c;j++) {
      int n;
      printf("mat2(%d%d):",i,j);
      scanf("%d" , &n);
      mat2[i][j] = n;
    }
  }
  for(int i = 0 ; i<r ; i++) {
    for(int j = 0; j<c;j++) {
    
      mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
  for(int i = 0 ; i<r ; i++) {
    for(int j = 0; j<c;j++) {
    
      printf("%d " , mat3[i][j]);
    }
    printf("\n");
  }

  

  

  return 0;
}