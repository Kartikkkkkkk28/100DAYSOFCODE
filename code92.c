#include <stdio.h>
#include <string.h>

char firstRepeatingLowercase(const char *str) {
    int seen[26] = {0};
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int idx = str[i] - 'a';
            if (seen[idx]) {
                return str[i];
            }
            seen[idx] = 1;
        }
    }
    return '\0'; 
}

int main() {
    char str[] = "abAcdbE";
    char res = firstRepeatingLowercase(str);
    if (res) {
        printf("First repeating lowercase alphabet: %c\n", res);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}
