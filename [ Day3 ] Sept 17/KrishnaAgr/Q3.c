#include <stdio.h>
int main() {
int ASCII;
char character = '\0';
printf("Enter a character:");
scanf("%c" , &character);
ASCII = character;
if(ASCII == 97 || ASCII == 101 || ASCII == 105 || ASCII == 111 || ASCII == 117 || ASCII == 65 || ASCII == 69 || ASCII == 73 || ASCII == 79 || ASCII == 85 ) {
  printf("It is a Vowel");
} else {printf("It is not a Vowel");
}

  return 0;
}