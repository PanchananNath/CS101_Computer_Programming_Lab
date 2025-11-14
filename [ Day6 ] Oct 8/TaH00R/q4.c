#include <stdio.h>

void checkPrime(int a,int b){
for(a;a<b;a++){
    int check = 0;    
    int value = a;
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0) {
            check = 1;
            break;
        }
    }
    if (check==0) {
        printf("%d\n",value);
    }
}
}

int main() {
    int a, b;
    printf("Enter Start Point: ");
    scanf("%d",&a);
    printf("Enter End Point: ");
    scanf("%d",&b);

    checkPrime(a,b);
    
    return 0;
}