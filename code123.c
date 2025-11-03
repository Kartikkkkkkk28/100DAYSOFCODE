#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    int chars = 0, words = 0, lines = 0;
    char ch, prev = ' ';

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n') {
            lines++;
        }

        if (!isspace(ch) && (isspace(prev) || prev == '\n')) {
            words++;
        }
        prev = ch;
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
