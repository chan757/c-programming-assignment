#include <stdio.h>

int main(void)
{
    int x;
    int result;

    scanf("%d", &x);

    result = x + 3;
    printf("%d\n", result);
    printf("%d %d %d\n", result - 1, x, result);

    return 0;
}