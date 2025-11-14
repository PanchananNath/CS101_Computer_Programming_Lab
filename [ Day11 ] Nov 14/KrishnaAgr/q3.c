#include <stdio.h>
#include <string.h>
struct P {
  char c;
  float mem2;
};

struct S {
  int n;  
  struct P p;
  };



int main() {
  struct S s;
  printf("Enter a integer: ");
  scanf("%d" , &s.n);
  
  printf("Enter a float: ");
  scanf("%f" , &s.p.mem2);
  printf("Enter a character: ");
  scanf(" %c" , &s.p.c);

  printf("%d\n" , s.n);
  printf("%f\n" , s.p.mem2);
  printf("%c" , s.p.c);
  return 0;
}