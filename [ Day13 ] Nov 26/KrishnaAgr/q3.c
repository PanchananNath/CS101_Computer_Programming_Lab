#include <stdio.h>
int main() {
  char name[50];
  printf("Enter the file name: ");
  fgets(name , 50 ,stdin);
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }
  FILE *fp;
  fp = fopen(name , "r");
  char ch;
  while((ch = fgetc(fp)) != EOF) {
    printf("%c" , ch);
  }
  fclose(fp);
  return 0;
}