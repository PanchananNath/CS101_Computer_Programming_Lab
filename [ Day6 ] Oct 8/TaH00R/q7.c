#include <stdio.h>

void Check(int a, int b, int c){
if(a>b && a>c){
    printf("%d is The Greatest", a);
}
else if(b>a && b>c){
    printf("%d is The Greatest", b);
}
else{
    printf("%d is The Greatest", c);
}
}

int main() {
    int a, b, c;
    printf("Enter First Value: ");
    scanf("%d",&a);
    printf("Enter Second Value: ");
    scanf("%d",&b);
    printf("Enter Third Value: ");
    scanf("%d",&c);

    Check(a,b,c);
    return 0;
}