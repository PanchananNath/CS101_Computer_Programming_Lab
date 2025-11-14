#include <stdio.h>

int main() {
    int x, n;
    printf("Enter Value of x: ");
    scanf("%d", &x);
    printf("Enter Value of n: ");
    scanf("%d", &n);

    float sum = 1.0;  
    int power = 1;    
    int fac = 1;      

    for (int i = 1; i <= n; i++) {
        power *= x;     
        fac *= i;        
        sum += (float)power / fac;
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}
