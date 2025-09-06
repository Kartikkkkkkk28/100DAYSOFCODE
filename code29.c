<<<<<<< HEAD
#include <stdio.h>
int main() {
    int n, i;
    int factorial = 1;  
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial =factorial* i;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}
=======
#include <stdio.h>
int main() {
    int n, i;
    int factorial = 1;  
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial =factorial* i;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}
>>>>>>> 955887b0aa6e935bc9039484d7176dd3b52f4397
