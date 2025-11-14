#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100], word[20];
    int i, j, found, index = -1;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    

    printf("Enter the word for which you want to find index: ");
    scanf("%s", word);

    int lenS = strlen(sentence);
    int lenW = strlen(word);

    for (i = 0; i <= lenS - lenW; i++) {
        found = 1;
        for (j = 0; j < lenW; j++) {
            if (sentence[i + j] != word[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            index = i;
            break;
        }
    }

    if (index != -1)
        printf("The word '%s' starts at index %d.\n", word, index);
    else
        printf("Word not found in the sentence.\n");

    return 0;
}
