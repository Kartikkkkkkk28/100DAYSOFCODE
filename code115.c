#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int countS[26] = {0}, countT[26] = {0};
    int i;

    scanf("%s %s", s, t);

    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; i < lenS; i++) {
        countS[s[i] - 'a']++;
        countT[t[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (countS[i] != countT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
