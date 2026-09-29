#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int num1;
    scanf("%d", &num1);

    printf("%s", (num1%2==0?"Even":"Odd"));
    return 0;
}