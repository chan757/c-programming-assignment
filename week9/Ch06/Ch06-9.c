#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int column;

    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (column = 1; column <= n; column++) {
            printf("(%d, %d)", row, column);
            if (column < n) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}