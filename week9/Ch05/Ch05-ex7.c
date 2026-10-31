#include <stdio.h>

int main(void)
{
    int number;
    int count = 0;
    long long sum = 0;

    while (scanf("%d", &number) == 1 && number != 0) {
        sum += number;
        count++;
    }

    printf("%d\n", count);
    printf("%lld\n", sum);

    if (count > 0) {
        printf("%.2f\n", (double)sum / count);
    } else {
        printf("0.00\n");
    }

    return 0;
}