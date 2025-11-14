#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000];
    printf("Enter String: ");
    scanf("%[^\n]s",str);
    char rev[1000];
    int j=0,i = 0;
    while(str[i++]!='\0');
        while(j<i-1){
            rev[j] = str[i-j-2];
            j++;
    }
    rev[j] = '\0';
    printf("%s",rev);
    return 0;
}