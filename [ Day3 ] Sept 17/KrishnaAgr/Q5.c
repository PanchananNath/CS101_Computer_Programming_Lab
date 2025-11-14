#include <stdio.h>
int main() {

 int year;
 printf("Enter the year:");
 scanf("%d" , &year);

 if(year % 4 == 0) {
  if(year % 100 != 0) {
    printf("It is a leap yaer");
  } else if(year % 100 == 0 && year % 400 == 0) {
    printf("It is a leap year");
  } else if(year % 100 == 0 && year % 400 !=0) {
    printf("It is not a leap year");
  }
 } else {
  printf("It is not a leap year");
}
  return 0;
}