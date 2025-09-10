#include <stdio.h>

int main() {
    int n, num, first, last, digits = 0, swapped, middle, pow = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    last = num % 10;
    int temp = num;
    while (temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;   
    }
    first = temp;
    middle = (num % pow) / 10;
    swapped = last * pow + middle * 10 + first;
    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}
