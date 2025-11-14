#include <stdio.h>

void PerfectNumber(int a, int b){
for(a;a<b;a++){
    int check = a;
    int sum = 0;
    for(int i = 1; i<check;i++){
        if (check%i == 0){
            sum += i;
        }
    }
    if (sum == check){
        printf("%d\n",check);
    }
}
}

int main() {
    int a, b;
    printf("Enter Start Point: ");
    scanf("%d",&a);
    printf("Enter End Point: ");
    scanf("%d",&b);

    PerfectNumber(a,b);
    
    return 0;
}