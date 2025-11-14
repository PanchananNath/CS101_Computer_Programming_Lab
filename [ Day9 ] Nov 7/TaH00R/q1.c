#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    printf("Enter String: ");
    scanf("%[^\n]s",str);

    int i = 0;
    while(str[i] != '\0'){
        printf("%c : %p\n",str[i],&str[i]);
    i++;}
    return 0;
}