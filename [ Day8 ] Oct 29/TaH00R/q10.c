#include <stdio.h>
#include <stdlib.h>

int checkPrime(int num){
    int check = 0;

    if(num == 1) return 0;

    for(int i = 2; i*i<=num; i++){
        if(num%i == 0){
            check = 1; 
            break;
        } 
    }
    if(check)return 0;
    else return 1;
}

int main() {
    int n, array[100];
    int NonPrime = 0,Prime = 0;

    printf("Enter the Number of Elements in the Array: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("Enter Value of Array At Index %d: ",i);
        scanf("%d",&array[i]);
    }

    for(int i = 0; i<n; i++){
        if(checkPrime(array[i]) == 1) Prime++;
        else NonPrime++;
    }

    printf("Number of Non-Prime Number is %d\n",NonPrime);
    printf("Number of Prime Number is %d\n",Prime);
    return 0;
}