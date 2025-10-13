#include <stdio.h>
#include <string.h>

void reverseWord(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';  
    }

    char *word_start = NULL;
    char *temp = str;

    while (*temp) {
        if ((word_start == NULL) && (*temp != ' ')) {
            word_start = temp;
        }
        if (word_start && ((*(temp + 1) == ' ') || (*(temp + 1) == '\0'))) {
            reverseWord(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }

    printf("Output: %s\n", str);
    return 0;
}
