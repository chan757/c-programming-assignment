#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int space;
    int star;

    scanf("%d", &n);

    for (row = n; row >= 1; row--) {
        for (space = 0; space < n - row; space++) {
            printf(" ");
        }
        for (star = 0; star < 2 * row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}