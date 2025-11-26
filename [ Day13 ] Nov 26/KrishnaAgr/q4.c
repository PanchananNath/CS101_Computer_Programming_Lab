#include <stdio.h>
int main() {
  FILE *fp1;
  FILE *fp2;
  fp1 = fopen("q4source.txt" , "r");
  fp2 = fopen("q4destination.txt" , "w");
  char ch;
  while((ch = fgetc(fp1)) != EOF) {
    fputc(ch , fp2);
  }
  fclose(fp1);
  fclose(fp2);
  printf("Copying Success");

}