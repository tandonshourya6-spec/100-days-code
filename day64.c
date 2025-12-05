
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int len = 0;
        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]])
                break;
            visited[(unsigned char)s[j]] = 1;
            len++;
        }
        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
