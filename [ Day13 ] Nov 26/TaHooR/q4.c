#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char source[100], dest[100];
    char text[1000], ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", dest);
    getchar(); 

    // Write text to source file
    sourceFile = fopen(source, "w");
    printf("Enter text to write to source file:\n");
    fgets(text, sizeof(text), stdin);
    fputs(text, sourceFile);
    fclose(sourceFile);

    
    sourceFile = fopen(source, "r");
    destFile = fopen(dest, "w");

    // Copy from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");
    return 0;
}
