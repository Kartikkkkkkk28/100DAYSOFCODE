#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int areRotations(char *str1, char *str2) {
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    if (size1 != size2)
        return 0;

    char *temp = (char *)malloc(sizeof(char) * (size1 * 2 + 1));
    temp[0] = '\0';

    strcat(temp, str1);
    strcat(temp, str1);

    char *ptr = strstr(temp, str2);

    free(temp);

    if (ptr != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";
    char str3[] = "ACBD";

    if (areRotations(str1, str2))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are not rotations of each other\n");

    if (areRotations(str1, str3))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are not rotations of each other\n");

    return 0;
}
