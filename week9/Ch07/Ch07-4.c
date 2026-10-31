#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int column;
    int space;

    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (space = 1; space <= n - row; space++) {
            printf("  ");
        }
        for (column = 1; column <= row; column++) {
            printf("%d ", column);
        }
        printf("\n");
    }

    return 0;
}