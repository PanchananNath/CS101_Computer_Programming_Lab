#include <stdio.h>
int main() {
int ASCII ;
char character = '\0';
printf("Enter a character:");
scanf("%c" , &character);
ASCII = character;
if((ASCII >= 97 && ASCII <=122 ) && (ASCII == 97 ||ASCII == 101 || ASCII == 105 || ASCII == 111 || ASCII == 117)) {
  printf("Category 1");
} else if ((ASCII >= 65 && ASCII <=90 ) && (ASCII != 65 ||ASCII != 69 || ASCII != 73 || ASCII != 79 || ASCII != 85)) {
  printf("Category 2");
} else if(ASCII == 65 ||ASCII == 69 || ASCII == 73 || ASCII == 79 || ASCII == 85) {
  printf("Category 3:Capital letter and vowel");
} else if (ASCII != 97 ||ASCII != 101 || ASCII != 105 || ASCII != 111 || ASCII != 117){
  printf("Category 4:small letter and consonent");
}




  return 0;
}