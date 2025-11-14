#include <stdio.h>
#include <string.h>

int main() {
    int m = 50;
    printf("Enter a sentence: ");
    char sent[m];
    fgets(sent, m, stdin);
    sent[strcspn(sent, "\n")] = '\0';
    char the[3] = "the";
    int count = 0;
    for(int i = 0; sent[i] != '\0'; i++) {
        
        if(sent[i] == 't' && sent[i+1] == 'h' && sent[i+2] == 'e') {
           
            if((i == 0 || sent[i-1] == ' ') && (sent[i+3] == ' ' || sent[i+3] == '\0')) {
                count++;
            }
        }
    }
    
    printf("Count of 'the': %d\n", count);
    return 0;
}
