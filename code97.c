#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(char *name) {
    int i = 0;
    if (strlen(name) > 0 && isalpha(name[0]))
        printf("%c ", toupper(name[0]));

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != '\0' && isalpha(name[i+1]))
            printf("%c ", toupper(name[i+1]));
        i++;
    }
    printf("\n");
}

int main() {
    char name[100];
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; 

    printInitials(name);
    return 0;
}
