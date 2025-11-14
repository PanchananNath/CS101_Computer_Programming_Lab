#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    char reversed[200];
    int i = 0, j = 0, k = 0, start, end;

    while (str[i] != '\0') {
        i++;
    }
    end = i - 1;
    i = end;
    while (i >= 0) {
        if (str[i] == ' ' || i == 0) {
            start = (i == 0) ? 0 : i + 1;
            for (j = start; j <= end; j++) {
                reversed[k++] = str[j];
            }
            if (i != 0) {
                reversed[k++] = ' ';
            }
            end = i - 1;
        }
        i--;
    }
    reversed[k] = '\0';  
    printf("%s\n", reversed);
    return 0;
}
