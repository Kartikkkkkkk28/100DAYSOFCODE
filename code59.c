#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("%d %d\n", evenCount, oddCount);

    return 0;
}
