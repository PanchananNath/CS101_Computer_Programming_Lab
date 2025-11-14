#include <stdio.h>
int main() {
  int num;
  int sNo ;
  int ssNo ;
  int lNo ;
  int slNo ;
    printf("Enter number 1:\n");
    scanf("%d" , &num);
    ssNo = slNo = num;
    lNo = sNo = num;
  for(int i = 2; i <=10;i++ ) {
    printf("Enter number %d:\n" , i);
    scanf("%d" , &num);
    if(num > lNo) {
      slNo = lNo;
      lNo = num;
    } else if( num > slNo && num != lNo ) {
      slNo = num;
    }
    if(num < sNo) {
      ssNo = sNo;
      sNo = num;
    } else if( num < ssNo && num != sNo) {
      ssNo = num;
    } 
    
    
  }
  printf("second largest:%d\n" , slNo);
  printf("second smallest:%d" , ssNo);
  return 0;
}