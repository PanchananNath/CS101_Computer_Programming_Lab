#include <stdio.h>
int main() {
  
  float si;
  int p , t , r;
  
  printf("Enter principal amount");
  scanf("%d" , &p);
  printf("Enter time");
  scanf("%d" , &t);
  printf("Enter rate of interest");
  scanf("%d" , &r);
  
  si = (p*r*t)/100;
  printf("interst will be: %.2f" , si);
  return 0;
}