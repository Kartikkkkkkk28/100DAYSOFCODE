#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastIndex[128];
    for (int i = 0; i < 128; i++) {
        lastIndex[i] = -1;
    }
    int maxLength = 0;
    int start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1;
        }
        lastIndex[(int)s[i]] = i;
        int currLength = i - start + 1;
        if (currLength > maxLength) {
            maxLength = currLength;
        }
    }
    return maxLength;
}

int main() {
    char str[1001];
    scanf("%s", str);
    printf("%d\n", lengthOfLongestSubstring(str));
    return 0;
}
