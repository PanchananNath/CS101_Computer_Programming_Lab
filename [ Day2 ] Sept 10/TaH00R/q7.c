//Write a program in C to initialize a char variable as ‘a’ and print it’s ASCII value

#include <stdio.h>

int main() {
    //char ch = 'a';
    //printf("ASCII value of %c = %d\n", ch, (int)ch);

    //char ch2;
    
    //printf("Enter a character: ");
    //scanf("%c", &ch2);
    //printf("ASCII value of %c = %d\n", ch2, (int)ch2);
    int i;
    for(i = 0;i < 26;i++){
        printf(" ");
        printf("ASCII value of %c = %d\n", 'a' + i, (int)('a' + i));
        printf("ASCII value of %c = %d\n", 'A' + i, (int)('A' + i));
        printf(" ");
    }
    return 0;
}