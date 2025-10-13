#include <stdio.h>
#include <string.h>

int areAnagrams(char *s1, char *s2) {
    int count1[256] = {0}, count2[256] = {0};
    int i;

    if (strlen(s1) != strlen(s2))
        return 0;

    for (i = 0; s1[i]; i++) {
        count1[(unsigned char)s1[i]]++;
        count2[(unsigned char)s2[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i])
            return 0;
    }
    return 1;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    if (areAnagrams(str1, str2))
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    char str3[] = "hello";
    char str4[] = "world";
    if (areAnagrams(str3, str4))
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
