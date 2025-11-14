#include <stdio.h>

int main() {
    int a;
    printf("Enter Value: ");
    scanf("%d",&a);

    int i = 2;
    int check = 1;

    if (a == 1){
        printf("Not Defined");
    }
    else if(a == 2){
        printf("Prime");
    }
    else{
        while (i < a){
            if(a % i == 0){
                check = 0;
                break;
            }
            i++;
        }
    }

    if (a > 2) {
        if (check == 0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}