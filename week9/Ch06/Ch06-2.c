#include <stdio.h>

int main(void)
{
    int first;
    int second;
    int start;
    int end;
    int number;

    scanf("%d %d", &first, &second);

    if (first < second) {
        start = first;
        end = second;
    } else {
        start = second;
        end = first;
    }

    for (number = start; number <= end; number++) {
        printf("%d ", number);
    }
    printf("\n");

    return 0;
}