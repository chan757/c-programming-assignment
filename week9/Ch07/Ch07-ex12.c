#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int column;
    int number = 1;
    char letter = 'A';

    scanf("%d", &n);

    for (row = 0; row < n; row++) {
        for (column = 0; column <= n; column++) {
            if (column < n - row) {
                printf("%d ", number);
                number++;
            } else {
                printf("%c", letter);
                letter++;
                if (column < n) {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}