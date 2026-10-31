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

    return 0;
}