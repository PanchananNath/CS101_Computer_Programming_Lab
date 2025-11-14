#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "Hello World";
    char rev[100];
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