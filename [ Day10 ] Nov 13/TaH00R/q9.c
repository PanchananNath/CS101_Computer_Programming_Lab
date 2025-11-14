#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000], result[1000];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) result[j++] = str[i];  
    }
    result[j] = '\0'; 
    printf("String after removing non-alphabets: %s\n", result);
    return 0;
}