#include <stdio.h>

int main() {
    int n;
    int p[10][10] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        p[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
