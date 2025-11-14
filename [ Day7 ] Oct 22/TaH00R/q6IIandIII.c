#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int num[1000];

    for(int i = 0; i<n; i++){
        int temp;
        printf("Enter Value at Index %d: ",i);
        scanf("%d",&num[i]);
    }

    int min,index;

    for(int i = 0; i<n; i++){
        min = num[i], index = i;
        for(int j = i+1; j<n;j++){
            if (min > num[j]) min = num[j], index = j;
        }
        num[index] = num[i];
        num[i] = min;
    }
    printf("Smallest value : %d\n", num[0]);
    printf("Largest value: %d\n",num[n-1]);
}