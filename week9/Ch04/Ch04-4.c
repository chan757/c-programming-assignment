#include <stdio.h>

int main(void)
{
	int number;

	scanf("%d", &number);

	switch (number) {
	case 1:
		printf("dog\n");
		break;
	case 2:
		printf("cat\n");
		break;
	case 3:
		printf("chick\n");
		break;
	default:
		printf("blank\n");
		break;
	}

	return 0;
}
