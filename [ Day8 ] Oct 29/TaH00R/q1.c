#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, n, array[1000];

    printf("Enter Sum value: ");
    scanf("%d",&num);
    
    printf("Enter the Number of Elements in the Array: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("Enter Value of Array At Index %d: ",i);
        scanf("%d",&array[i]);
    }

    for(int i = 0; i<n; i++){
        int temp1 = array[i];
        for(int j = i+1;j<n;j++){
            int temp2 = array[j];
            if( temp1 + temp2 == num){
                printf("Num %d at Index %d + Num %d at Index %d = %d\n",
                temp1,i,temp2,j,num);
            }
        }
    }

    return 0;
}