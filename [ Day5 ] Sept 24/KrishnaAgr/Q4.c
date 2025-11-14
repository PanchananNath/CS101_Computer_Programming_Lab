#include <stdio.h>

int add(int n1 ,int n2) {
  printf("%d" , n1 + n2);
}
int subtract(int n1 ,int n2) {
  printf("%d" , n1 - n2);
}
int multiply(int n1 ,int n2) {
  printf("%d" , n1 * n2);
}
int divide(int n1 ,int n2) {
  printf("%d" , n1 / n2);
}

int main() {

  char action = '\0';
  int n1 , n2;
  printf("Enter Number 1:");
  scanf("%d" , &n1);
  printf("Enter Operator:");
  scanf(" %c" , &action);
  printf("Enter Number 2:");
  scanf("%d" , &n2);

  switch(action) {
    case '+': 
          add(n1 , n2);
  
    case '-': 
          subtract(n1 , n2);
  
    case '*': 
          multiply(n1 , n2);
  
    case '/': 
          divide(n1 , n2);
  }
  return 0;
}








// void hello(char name[]) {
//    printf("hello %s" , name);
// }
/*
void HappyBday(char BdayName[] , int age) {
  printf("Happy Birthday to you\nHappy Birthday to dear %s\nYou are %d years old" , BdayName , age);
}

int main() {
  // char name[50] = "";
  // fgets(name , sizeof(name) , stdin);
  // hello(name);

  char BdayName[50] = "";
  fgets(BdayName , sizeof(BdayName),stdin);
  BdayName[strlen(BdayName) - 1] = '\0';

  int age;
  scanf("%d" , &age);
 
  HappyBday(BdayName , age);

  return 0;
}
  */