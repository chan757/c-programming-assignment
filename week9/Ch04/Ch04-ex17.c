#include <stdio.h>

int main(void)
{
    int first;
    int second;
    int larger;

    scanf("%d %d", &first, &second);

    larger = (first > second) ? first : second;
    printf("%d\n", larger);

    return 0;
}