#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d", &n); 
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k); 

    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("0 ");
    }
    return 0;
}
