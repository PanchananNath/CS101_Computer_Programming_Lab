#include <stdio.h>
#include <string.h>
int main() {

  char name1[100];
  char name2[100];
  gets(name1);
  for(int i = strlen(name1)-1 ; i >= 0 ; i--) {
    name2[(strlen(name1) -1)-i] = name1[i];
  }
  int count = 1;
  for(int j = 0 ; j < strlen(name1) ; j++) {
    if(name1[j] != name2[j]) {
      count = 0;
      printf("String not Palindrome");
      break;
    }
  }
  if(count  == 1) printf("String is palindrome");

  return 0;
}