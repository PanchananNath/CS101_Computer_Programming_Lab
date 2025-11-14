#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct S {
  int x;
  int y;

}; 
int main() {
  struct S s;
  float dist;
  printf("enter x coordinate: ");
  scanf("%d" , &s.x);
  printf("enter y coordinate: ");
  scanf("%d" , &s.y);
  dist = pow((s.x*s.x + s.y*s.y),0.5);
  printf("%.2f" , dist);
}
 