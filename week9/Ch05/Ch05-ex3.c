#include <stdio.h>

int main(void)
{
    int num = 1;
    int sum = 0;

    while (num <= 10) {
        sum += num;
        num++;
    }

    printf("%d\n", sum);
    printf("%d\n", num);

    return 0;
}