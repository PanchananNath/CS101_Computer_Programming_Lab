#include <stdio.h>
int main()
{
  int a = 2;
  int b = 5;

  a = a + b; // a= 7
  b = a - b;
  a = a - b;
  
  printf("a:%d b:%d" , a , b);


}