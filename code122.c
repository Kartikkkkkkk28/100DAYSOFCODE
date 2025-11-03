#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    char line[256];

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
