#include <stdio.h>

int main(void)
{
    int first;
    int second;
    int third;

    scanf("%d %d %d", &first, &second, &third);

    if (first > 0 && second > 0 && third > 0) {
        printf("All Positive\n");
    } else if (first == 0 || second == 0 || third == 0) {
        printf("Contain Zero\n");
    } else {
        printf("Mixed\n");
    }

    return 0;
}