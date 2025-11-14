#include <stdio.h>
int main() {

  int n;
  int n1;
  printf("Enter n:");
  scanf("%d" , &n);
 n1 = n;
  for(int i = 1; i<=n1 ; i++) {
    for(int j = 1; j<=n; j++) {
      printf("%d" , j);
    }
    n--;
    printf("\n");
  }

  return 0;

}