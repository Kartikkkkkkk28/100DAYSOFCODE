<<<<<<< HEAD
#include <stdio.h>
void toBinary(int n) {
    if (n > 1) {
        toBinary(n / 2);   
    }
    printf("%d", n % 2);   
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        toBinary(n);
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>
void toBinary(int n) {
    if (n > 1) {
        toBinary(n / 2);   
    }
    printf("%d", n % 2);   
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        toBinary(n);
        printf("\n");
    }
    return 0;
}
>>>>>>> 955887b0aa6e935bc9039484d7176dd3b52f4397
