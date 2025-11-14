#include <stdio.h>
int main() {

  int m = 50;
  char str[m];
  fgets(str , m , stdin);
  char vowels[10] = {'a','e','i','o','u','A','E','I','O','U'};
  int count = 0;
  for(int i = 0 ; i < m ;i++) {
    if(str[i] == '\n') {
      break;
    }
    for(int j = 0 ; j < 10 ; j++) {
      if(str[i] == vowels[j]) {
        count++;
      }
    }
  }
  printf("%d" , count);

  return 0;
}