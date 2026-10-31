#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int column;
    int space;

    scanf("%d", &n);

    for (row = 0; row < 2 * n - 1; row++) {
        int width = (row < n) ? row + 1 : 2 * n - 1 - row;

        for (space = 0; space < (row < n ? 0 : row - n + 1); space++) {
            printf(" ");
        }

        for (column = 0; column < width; column++) {
            printf("#");
            if (column < width - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}