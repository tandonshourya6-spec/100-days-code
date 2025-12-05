#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char longest[100] = "";
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = 0;

    char *word = strtok(sentence, " ");
    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("The longest word is: %s\n", longest);
    return 0;
}