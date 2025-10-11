#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    int symmetric = 1;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != transpose[i][j]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric) break;
    }

    if(symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
