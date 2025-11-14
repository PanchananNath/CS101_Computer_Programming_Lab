#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    const char target[] = "the";
    int count = 0;

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(target);

    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || !isalpha(str[i - 1])) {
            if (tolower(str[i]) == 't' && 
                tolower(str[i + 1]) == 'h' && 
                tolower(str[i + 2]) == 'e' && 
                !isalpha(str[i + 3])) {
                count++;
            }
        }
    }
    printf("'%s' appears %d times\n", target, count);
    return 0;
}
