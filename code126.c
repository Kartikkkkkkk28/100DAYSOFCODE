#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char filename[1024];
    printf("Enter filename: ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        fprintf(stderr, "No input received.\n");
        return 1;
    }

    size_t len = 0;
    while (filename[len] != '\0') ++len;
    if (len > 0 && filename[len-1] == '\n') filename[len-1] = '\0';

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        fputs(buffer, stdout);
    }

    if (ferror(fp)) {
        fprintf(stderr, "\nError reading file \"%s\".\n", filename);
        fclose(fp);
        return 1;
    }

    fclose(fp);
    return 0;
}
