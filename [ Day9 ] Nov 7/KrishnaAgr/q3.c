#include <stdio.h>
#include <string.h>
int main() {
  char name[100];
  gets(name);
  for(int i = 0 ; i < strlen(name) ;i++) {
    name[i] -= 32;
  }
  for(int j = 0 ; j <strlen(name) ; j++) {
    printf("%c" , name[j]);
  }
}