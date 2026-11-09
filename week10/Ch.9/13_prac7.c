#include <stdio.h>

int main() {
    int p[5][5] = {0};
    p[0][0] = 1;
    for (int i = 1; i < 5; i++) {
        p[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            p[i][j] = p[i - 1][j] + p[i - 1][j - 1];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
