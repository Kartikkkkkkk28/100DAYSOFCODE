#include <stdio.h>

int main() {
    int n, repeated = 0, num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        repeated ^= num;
    }
    for(int i = 1; i <= n - 1; i++) {
        repeated ^= i;
    }
    printf("%d\n", repeated);
    return 0;
}
