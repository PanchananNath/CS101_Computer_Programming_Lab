#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file;
    char ch;
    int cnt = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    while (cnt < 20 && (ch = fgetc(file)) != EOF) {
        putchar(ch);
        cnt++;
    }
    fclose(file);
    return 0;
}