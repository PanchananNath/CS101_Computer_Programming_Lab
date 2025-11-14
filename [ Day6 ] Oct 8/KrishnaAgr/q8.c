#include <stdio.h> 
#include <math.h>
int func(int a) {
  for(int i = 0; i < a ; i++) {
    int power = pow(2,i);
    if(power >= a) {
      return power;
      break;
    }
  }
}
int main() {
  printf("%d" , func(500));
}