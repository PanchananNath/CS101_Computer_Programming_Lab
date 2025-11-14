#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[100][100], m,n;

    printf("Enter Number of Students: ");
    scanf("%d",&m);

    printf("Enter Number of Subjects: ");
    scanf("%d",&n);

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            printf("Marks in Subject %d for Student %d: ",j+1,i+1);
            scanf("%d",&array[i][j]);
        }
    }
    for(int i = 0; i<m;i++){
        int min, index;
       for(int j = 0; j<n; j++){
        min = array[i][j], index = j;
        for(int k = j+1; k<n;k++){
            if (min > array[i][k]) min = array[i][k], index = k;
        }
        array[i][index] = array[i][j];
        array[i][j] = min;
    }
}

    for(int i = 0; i<m; i++){
            printf("Highest Marks for student %d: %d\n",i+1,array[i][n-1]);    
            printf("Lowest Marks for student %d: %d\n",i+1,array[i][0]);    
}

    return 0;
}
