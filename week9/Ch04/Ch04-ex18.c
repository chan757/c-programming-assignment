#include <stdio.h>

int main(void)
{
    int first;
    int second;
    int third;
    int minimum;

    scanf("%d %d %d", &first, &second, &third);

    minimum = (first < second) ? first : second;
    minimum = (minimum < third) ? minimum : third;

    printf("%d\n", minimum);

    return 0;
}