#include <stdio.h>

int main() {
    int a;
    printf("Enter Grade:");
    scanf("%d",&a);

    if (a > 100 || a<0){
        printf("X");
    }
    else if(a>90){
        printf("A");
    }
    else if(a>79 && a<90){
        printf("B");
    }
    else if(a>69 && a<79){
        printf("C");
    }
      else if(a>59 && a<69){
      printf("D");
    }
        else if(a>49 && a<59){
        printf("E");
    }
        else if(a>39 && a<49){
        printf("P");
    }

    else{
        printf("F");
    }

    return 0;
}