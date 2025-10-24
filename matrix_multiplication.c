#include <stdio.h>
int main(void)
{
    int a[10][10], b[10][10], c[10][10];
    int n, i, j, k;
    printf("Enter order n of the square matrices (max 10): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 10) {
        printf("Invalid size.\n");
        return 1;
    }
    printf("Enter elements of matrix A (%d x %d):\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of matrix B (%d x %d):\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            c[i][j] = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Product matrix C (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    return 0;
}
