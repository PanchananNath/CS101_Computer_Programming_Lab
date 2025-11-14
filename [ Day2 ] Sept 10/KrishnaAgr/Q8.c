#include <stdio.h>
int main()
{

  int n = 5;         // try with 0 , 1 , 5 , 7 , 10 , and 20
  int condition = 0; // try with 0 and 1

  if (n == 5)
  {
    printf("1\n");
  }
  else if (n % 2 == 0)
  {
    if (n == 10 && condition == 1)
    {
      printf("2\n");
    }
    else
    {
      printf("3\n");
      
    }
    printf("4\n", n);
  }
  else if (condition)
  {
    printf("5\n");
  }
  else if (0)
  {
    printf("6\n");
  }
  else
  {
    printf("7\n");
  }

  printf("8\n");

  return 0;
}
