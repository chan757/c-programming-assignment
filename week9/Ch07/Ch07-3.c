#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int space;
    int star;

    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (space = 1; space < row; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}