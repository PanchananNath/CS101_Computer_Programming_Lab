#include <stdio.h>
int main() {

  int n;
  int n1;
  printf("Enter n:");
  scanf("%d" , &n);
 n1 = n;
  for(int i = 1; i<=n1 ; i++) {
    for(int k = 2; k<= i;k++) {
      printf(" ");
    }
    for(int j = 0; j<n; j++) {
      printf("%d" , n-j);
    }
    n--;
    printf("\n");
  }

  return 0;

}