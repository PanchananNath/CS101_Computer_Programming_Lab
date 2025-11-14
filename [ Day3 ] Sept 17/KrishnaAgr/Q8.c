#include <stdio.h>
int main() {

  int basicSalary;
  printf("Enter your basic salary:");
  scanf("%d" , &basicSalary);
  int HRA;
  int DA;
  

  if(basicSalary <= 30000) {
    int totalSalary = basicSalary + basicSalary*0.2 + basicSalary*0.3;
    printf("Your total salary is:%d" , totalSalary);
  }
  if(basicSalary >= 60000) {
    int totalSalary = basicSalary + basicSalary*0.3 + basicSalary*0.4;
    printf("Your total salary is:%d" , totalSalary);
  }
  else if(basicSalary > 30000 && basicSalary <= 60000) {
    int totalSalary = basicSalary + basicSalary*0.25 + basicSalary*0.35;
    printf("Your total salary is:%d" , totalSalary);
  }
  return 0;
}