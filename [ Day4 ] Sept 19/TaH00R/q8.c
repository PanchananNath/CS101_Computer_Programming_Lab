#include <stdio.h>

int main() {
    int x,n,temp;
    printf("Enter Value of x: ");
    scanf("%d",&x);

    printf("Enter Value of n: ");
    scanf("%d",&n);

    temp = x;

    for(int i = 1; i<n; i++){
        x *=temp;
    }

    printf("%d",x);
    return 0;
}