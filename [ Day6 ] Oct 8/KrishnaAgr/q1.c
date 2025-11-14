#include <stdio.h>

float Area(int a) {
  float formula = 3.14*a*a;
  return formula;
}
int main() {
  printf("%.2f" , Area(5));
  return 0;
}
