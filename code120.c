#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int newWord = 1;

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            if (newWord) {
                str[i] = toupper(str[i]);
                newWord = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        } else {
            newWord = (str[i] == ' ') ? 1 : newWord;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
