#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int column;

    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (column = 1; column <= row; column++) {
            printf("*");
        }
        printf("\n");
    }

    for (row = n - 1; row >= 1; row--) {
        for (column = 1; column <= row; column++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}