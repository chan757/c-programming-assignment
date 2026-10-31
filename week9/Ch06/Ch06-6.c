#include <stdio.h>

int main(void)
{
    int first;
    int second;
    int start;
    int end;
    int number;
    int count = 0;
    long long sum = 0;

    scanf("%d %d", &first, &second);

    if (first < second) {
        start = first;
        end = second;
    } else {
        start = second;
        end = first;
    }

    for (number = start; number <= end; number++) {
        if (number % 3 == 0 || number % 5 == 0) {
            sum += number;
            count++;
        }
    }

    printf("%lld\n", sum);
    if (count > 0) {
        printf("%.1f\n", (double)sum / count);
    } else {
        printf("0.0\n");
    }

    return 0;
}