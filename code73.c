#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int matrix[m][n], rowSum[m];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < m; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for(int i = 0; i < m; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    return 0;
}
