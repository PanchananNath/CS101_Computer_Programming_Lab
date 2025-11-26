// Write a program to merge the contents of two files into the third file

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *destFile;
    char fileName1[100], fileName2[100], destFileName[100];
    char ch;
    printf("Enter first source file name: ");
    scanf("%s", fileName1);
    printf("Enter second source file name: ");
    scanf("%s", fileName2);
    printf("Enter destination file name: ");
    scanf("%s", destFileName);
    file1 = fopen(fileName1, "r");
    if (file1 == NULL) {
        printf("Could not open file %s\n", fileName1);
        return 1;
    }
    file2 = fopen(fileName2, "r");
    if (file2 == NULL) {
        printf("Could not open file %s\n", fileName2);
        fclose(file1);
        return 1;
    }
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Could not create file %s\n", destFileName);
        fclose(file1);
        fclose(file2);
        return 1;
    }
    while((ch = fgetc(file1))!= EOF) {
        fputc(ch, destFile);
    }

    while((ch = fgetc(file2))!= EOF) {
        fputc(ch, destFile);
    }
    fclose(file1);
    fclose(file2);
    fclose(destFile);
    return 0;
}