#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitialsWithSurname(char *name) {
    int len = strlen(name);
    int i = 0;
    
    if(len == 0) return;

    while(i < len && name[i] == ' ')
        i++;

    if(i < len && isalpha(name[i]))
        printf("%c. ", toupper(name[i]));

    while(i < len && name[i] != ' ')
        i++;

    while(i < len && name[i] == ' ')
        i++;

    int surnameStart = i;

    while(i < len)
        i++;

    if(surnameStart < len) {
        for(int j = surnameStart; j < len; j++) {
            printf("%c", name[j]);
        }
    }
    printf("\n");
}

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printInitialsWithSurname(name);

    return 0;
}
