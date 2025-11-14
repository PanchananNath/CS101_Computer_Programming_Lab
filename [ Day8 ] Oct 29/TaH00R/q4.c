#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, array[100];
    printf("Enter the Number of Elements in the Array: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("Enter Value of Array At Index %d: ",i);
        scanf("%d",&array[i]);
    }
    
    int min,index;

    for(int i = 0; i<n; i++){
        min = array[i], index = i;
        for(int j = i+1; j<n;j++){
            if (min > array[j]) min = array[j], index = j;
        }
        array[index] = array[i];
        array[i] = min;
    }
    for (int i = 0; i<n; i++){
        printf("%d\n",array[i]);
    }    return 0;
}