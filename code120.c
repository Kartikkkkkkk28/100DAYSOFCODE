#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            str[i] = toupper(str[i]);
            i++;
            break;
        }
        i++;
    }

    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }

    printf("%s", str);
    return 0;
}
