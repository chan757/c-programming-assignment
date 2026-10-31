#include <stdio.h>

int main(void)
{
    int score;
    int total = 0;
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &score);
        total += score;
    }

    printf("%d\n", total);
    printf("%.1f\n", total / 5.0);

    return 0;
}