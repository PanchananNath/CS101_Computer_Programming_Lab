#include <stdio.h>
#include <string.h>
int main() {

  char name1[100];
  char name2[100];
  gets(name1);
  for(int i = strlen(name1)-1 ; i >= 0 ; i--) {
    name2[(strlen(name1) -1)-i] = name1[i];
  }
  for(int j = 0 ; j < strlen(name1); j++) {
    printf("%c" , name2[j]);
  }
}
