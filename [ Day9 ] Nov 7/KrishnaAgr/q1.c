#include <stdio.h>

int main() {
  int n ;
  printf("Enter the size of the array: ");
  scanf("%d " , &n);
  char name[n+1]; 
  
    scanf("%s" , &name);
    
  name[n] = '\0';
  for(int i = 0 ; i < n ; i++) {
    printf("%p\n" , &name[i]);
  }
  
  return 0;
}
