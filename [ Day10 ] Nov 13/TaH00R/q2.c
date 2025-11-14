#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000];
    printf("Enter String: ");
    scanf("%[^\n]s",str);

    int count = 0,i=0;
    while(str[i]!='\0'){
        if(str[i] == 'A'|| str[i] == 'E'||str[i] == 'I'||str[i] == 'O' || str[i] == 'U'
        || str[i] == 'a' || str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')count++;
            i++;
    }
    printf("Number of Vowels : %d",count);
    return 0;
}