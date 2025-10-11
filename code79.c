#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    for(int d = 0; d <= n + m - 2; d++) {
        for(int i = 0; i < n; i++) {
            int j = d - i;
            if(j >= 0 && j < m) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
