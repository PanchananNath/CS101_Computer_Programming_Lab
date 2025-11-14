#include <stdio.h>
int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        int j = 1;
        while (j <= n - i) {
            printf(" ");
            j++;
        }
       
        int k = 1;
        while (k <= 2 * i - 1) {
            printf("*");
            k++;
        }
        printf("\n");
    }
    return 0;
}