#include <stdio.h>

int main() {
    int m, n, p, q;
    int A[10][10], B[10][10], C[10][10];
    int i, j, k;

    printf("Enter the order of matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the order of matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        printf("Reason: Number of columns in A (%d) != Number of rows in B (%d)\n", n, p);
        return 0;
    }

    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;

    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("\nMatrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++)
            printf("%5d", B[i][j]);
        printf("\n");
    }

    printf("\nProduct of A and B (Matrix C):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%5d", C[i][j]);
        printf("\n");
    }

    return 0;
}
