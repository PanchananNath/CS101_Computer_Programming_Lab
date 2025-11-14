#include <stdio.h>
int main() {

int s1 , s2 , s3;
printf("Enter length of three sides:");
scanf("%d" , &s1);
scanf("%d" , &s2);
scanf("%d" , &s3);

if(s1 == s2 && s2 == s3){
  printf("It is an equilateral triangle");
} else if(s1 == s2 || s2 == s3 || s3 == s1) {
  printf("It is an isosceles triangle");

}else{
  printf("It is a scalen triangle");
}
  return 0;
}