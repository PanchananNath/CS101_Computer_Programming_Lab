#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000];
    printf("Enter String: ");
    scanf("%[^\n]s",str);

    int count = 0,i=0;
    while(str[i]!='\0'){
        if(str[i]!=' '&&str[i]!=','&&str[i]!='.') count++;
        i++;
    }
    printf("%d",count);
    return 0;
}