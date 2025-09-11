#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = 2 * i;   
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.2lf\n", n, sum);

    return 0;
}
