<<<<<<< HEAD
#include <stdio.h>
int main() {
    int n, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;           
        reversed = reversed * 10 + remainder; 
        n = n / 10;                     
    }
    printf("Reversed number = %d\n", reversed);
    return 0;
}
=======
#include <stdio.h>
int main() {
    int n, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;           
        reversed = reversed * 10 + remainder; 
        n = n / 10;                     
    }
    printf("Reversed number = %d\n", reversed);
    return 0;
}
>>>>>>> 955887b0aa6e935bc9039484d7176dd3b52f4397
