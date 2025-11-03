#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a");
    char line[256];

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();  
    fgets(line, sizeof(line), stdin);

    fprintf(fp, "%s", line);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
