#include <stdio.h>

int main(void)
{
    int score;
    int count = 0;
    int sum = 0;

    while (scanf("%d", &score) == 1 && score >= 0 && score <= 100) {
        sum += score;
        count++;
    }

    printf("%d\n", sum);
    if (count > 0) {
        printf("%.1f\n", (double)sum / count);
    } else {
        printf("0.0\n");
    }

    return 0;
}