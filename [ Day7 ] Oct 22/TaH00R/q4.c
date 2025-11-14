#include <stdio.h>
#include <stdlib.h>

int DecimaltoBinary(int num){
    if(num>0){
    DecimaltoBinary(num/2);
    printf("%d",num%2);
}
}
int main() {
    int n;
    printf("Enter Decimal Number:");
    scanf("%d",&n);

    if (n==0)printf("0");
    else DecimaltoBinary(n);

    printf("\n");
    return 0;
}