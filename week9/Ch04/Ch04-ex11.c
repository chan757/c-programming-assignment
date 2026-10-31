#include <stdio.h>

int main(void)
{
    int first;
    int second;
    int third;
    int largest;

    scanf("%d %d %d", &first, &second, &third);

    largest = first;
    if (second > largest) {
        largest = second;
    }
    if (third > largest) {
        largest = third;
    }

    printf("%d\n", largest);

    return 0;
}