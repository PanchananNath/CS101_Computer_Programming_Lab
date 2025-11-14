#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}