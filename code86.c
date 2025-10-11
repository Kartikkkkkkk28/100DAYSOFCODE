#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int start = 0, end = length - 1;
    int palindrome = 1;

    while(start < end) {
        if(str[start] != str[end]) {
            palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if(palindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
