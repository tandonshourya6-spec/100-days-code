#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int freq1[256] = {0}, freq2[256] = {0};

    scanf("%[^\n]", s1);
    getchar();
    scanf("%[^\n]", s2);

    for (int i = 0; s1[i] != '\0'; i++)
        freq1[(unsigned char)s1[i]]++;

    for (int i = 0; s2[i] != '\0'; i++)
        freq2[(unsigned char)s2[i]]++;

    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
