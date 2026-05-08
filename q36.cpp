#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int m, n, p, q, i, j, k;

    scanf("%d %d", &m, &n);
    scanf("%d %d", &p, &q);

    if(n != p) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            result[i][j] = 0;

            for(k = 0; k < n; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++)
            printf("%d ", result[i][j]);

        printf("\n");
    }

    return 0;
}
