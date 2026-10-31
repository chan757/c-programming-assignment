#include <stdio.h>

int main(void)
{
    int n;
    int level;
    int column;

    scanf("%d", &n);

    for (level = n - 1; level >= 0; level--) {
        for (column = 0; column < n - 1 - level; column++) {
            printf(" ");
        }
        for (column = 0; column < 2 * level + 1; column++) {
            printf("*");
        }
        printf("\n");
    }

    for (level = 1; level < n; level++) {
        for (column = 0; column < n - 1 - level; column++) {
            printf(" ");
        }
        for (column = 0; column < 2 * level + 1; column++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}