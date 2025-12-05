#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    
    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;

    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = 0;

    int count[26] = {0};

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
