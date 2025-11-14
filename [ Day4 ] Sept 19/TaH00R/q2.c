#include <stdio.h>

int main() {
    int sum = 0;
    for(int i = 0;i <100; i++){
        sum += i+1;
    }
    printf("%d",sum);
    return 0;
}