#include <stdio.h>

int main(void)
{
	int number;

	scanf("%d", &number);

	if (number == 0) {
		printf("zero\n");
	} else if (number > 0) {
		printf("plus\n");
	} else {
		printf("minus\n");
	}

	return 0;
}