#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 if the last character is newline added by fgets
    if (count > 0 && str[count-1] == '\n') {
        count--;
    }

    printf("%d\n", count);
    return 0;
}
