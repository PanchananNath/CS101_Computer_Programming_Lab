#include <stdio.h>
//Hello how are you
int main() {
  int n = 100;
  int count = 1;
  printf("Enter the sentence :");
  char word[n];
  fgets(word ,n , stdin);
  for(int i =0 ;i < n;i++) {
    if(word[i] =='\0') {
      break;
    }else {
      if(word[i] == ' ') {
        count++;
      }
    }
  }
  printf("%d" , count);

  return 0;
}