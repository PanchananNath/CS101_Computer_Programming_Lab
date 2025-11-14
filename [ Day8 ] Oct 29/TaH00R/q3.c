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

    int largest = array[0];
    int secondlargest = array[0];
    int location = 0;

    for(int i = 1; i < n; i++) {
        if (array[i] > largest) {
            secondlargest = largest;
            largest = array[i];
            location = i-1;
        }
    }

    for(int i = 0; i < n; i++) {
        if (array[i] != largest && array[i] > secondlargest) {
            secondlargest = array[i];
            location = i;
        }
    }
     printf("Second Largest Value is %d at index %d", secondlargest, location);
    return 0;
}