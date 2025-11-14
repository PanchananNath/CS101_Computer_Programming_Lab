#include <stdio.h>

int main() {
    int a,b,check;
    printf("Enter Start Point: ");
    scanf("%d",&a);
    printf("Enter End Point: ");
    scanf("%d",&b);

    for(a; a < b; a++){
        if (a <= 1) continue;
        check = 0;
        int i = 2;
        while(i < a){
            if (a % i == 0){
                check = 1;
                break;
            }
            i++;
        }
        if (check == 0){
            printf("%d\n", a);
        }
    }
    return 0;
}