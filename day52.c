#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] > x) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    if (index != -1)
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);
    else
        printf("Ceil of %d does not exist\n", x);

    return 0;
}
