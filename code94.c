#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longestWord[1000];
    int maxLen = 0, currentLen = 0;
    int start = 0, i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    for (i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                strncpy(longestWord, &str[start], maxLen);
                longestWord[maxLen] = '\0';
            }
            currentLen = 0;
            start = i + 1;
        }
    }

    printf("Longest word: %s\n", longestWord);
    printf("Length of longest word: %d\n", maxLen);

    return 0;
}
