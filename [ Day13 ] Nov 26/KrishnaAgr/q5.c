#include <stdio.h>
int main() {
  FILE *fp1;
  FILE *fp2;
  FILE *fp3;
  fp1 = fopen("q5file1.txt" , "r");
  fp2 = fopen("q5file2.txt" , "r");
  fp3 = fopen("q5file3.txt" , "w");
  int ch;
while((ch = fgetc(fp1)) != EOF)  {
  fputc(ch , fp3);
}
while((ch = fgetc(fp2)) != EOF)  {
  fputc(ch , fp3);
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}