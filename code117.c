#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int arr1[m], arr2[n], merged[m + n];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int j = 0; j < n; j++) {
        scanf("%d", &arr2[j]);
    }

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}
