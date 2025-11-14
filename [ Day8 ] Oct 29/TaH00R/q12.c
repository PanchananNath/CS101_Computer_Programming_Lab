#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, m;
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);

    int arr1[1000];
    printf("Enter elements of first sorted array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second sorted array: ");
    scanf("%d", &m);

    int arr2[1000];
    printf("Enter elements of second sorted array:\n");

    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    int mergedSize = m + m;
    int mergedArray[1000];

    int i = 0, j = 0, k = 0;
    while (i < m && j < m) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }
    while (i < m) {
        mergedArray[k++] = arr1[i++];
    }
    while (j < m) {
        mergedArray[k++] = arr2[j++];
    }

    printf("Merged array:\n");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}