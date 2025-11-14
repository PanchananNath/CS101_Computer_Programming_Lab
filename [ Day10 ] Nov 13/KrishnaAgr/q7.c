#include <stdio.h>
#include <string.h>

int main() {
    int n = 100;
    char sent[n];
    fgets(sent, n, stdin);
    
    
    sent[strcspn(sent, "\n")] = '\0';
    
    char rev[50][50];
    int wordCount = 0;
    int charCount = 0;
    
   
    for(int i = 0; i < strlen(sent); i++) {
        if(sent[i] == ' ') {
            rev[wordCount][charCount] = '\0';
            wordCount++;
            charCount = 0;
        } else {
            rev[wordCount][charCount] = sent[i];
            charCount++;
        }
    }
    rev[wordCount][charCount] = '\0'; 
    wordCount++;
    
    
    for(int i = wordCount - 1; i >= 0; i--) {
        printf("%s ", rev[i]);
    }
    printf("\n");
    
    return 0;
}