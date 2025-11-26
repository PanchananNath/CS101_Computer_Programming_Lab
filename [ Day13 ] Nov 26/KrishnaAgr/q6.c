#include <stdio.h>
int main()
{
  FILE *fp;
  fp = fopen("q6file.txt", "r");
  int characters = 0;

  
  while (fgetc(fp) != EOF)
  {
    characters++;
  }
  printf("The number of characters in file is %d\n", characters);
  rewind(fp);
  
  char ch;
  int words = 0, inWord = 0;

  while ((ch = fgetc(fp)) != EOF)
  {
    if (ch == ' ' || ch == '\n' || ch == '\t')
    {
      inWord = 0;
    }
    else
    {
      if (inWord == 0)
      {
        words++;
        inWord = 1;
      }
    }
  }

  printf("The number of words in file is %d\n", words);
  rewind(fp);

  char ln;
  int lines = 0;
  while ((ln = fgetc(fp)) != EOF)
  {
    if (ln == '\n')
      lines++;
  }
  printf("There are %d line in the file", lines + 1);
  fclose(fp);
  return 0;
}