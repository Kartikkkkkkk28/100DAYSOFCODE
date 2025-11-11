#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        perror("Error opening input file");
        return 1;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        perror("Error opening output file");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
