#include <stdio.h>

int main() {
    int n = 20;
    char sent[n];

    fgets(sent, n, stdin);

    for (int i = 0; sent[i] != '\0'; i++) {
        if ((sent[i] >= 'A' && sent[i] <= 'Z') || (sent[i] >= 'a' && sent[i] <= 'z')) {
            printf("%c", sent[i]);
        }
    }
}
