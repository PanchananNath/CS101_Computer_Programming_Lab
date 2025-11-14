#include <stdio.h>
int main()
{
  int a = 2;
  int b = 3;
  int c;

  c = a;
  a = b;
  b = c;

  printf("a:%d b:%d " , a , b );

}