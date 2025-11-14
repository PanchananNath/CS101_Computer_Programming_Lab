#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000],target;
    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter Target Letter: ");
    scanf("%c",&target);

    int i = 0; 
    while(str[i]!='\0'){
        if(str[i] == target) printf("'%c' at Index: %d\n",target,i);
        i++;
    }
    return 0;
}