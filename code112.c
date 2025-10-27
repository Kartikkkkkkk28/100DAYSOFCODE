#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_sum = arr[0];
    int curr_sum = arr[0];

    for (int i = 1; i < n; i++) {
        curr_sum = (curr_sum > 0) ? (curr_sum + arr[i]) : arr[i];
        if (curr_sum > max_sum)
            max_sum = curr_sum;
    }

    printf("%d\n", max_sum);
    return 0;
}
