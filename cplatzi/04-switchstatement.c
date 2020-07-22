#include <stdio.h>

int main()
{
	int a = 1;
	switch (a)
	{
	case 1:
		a = 10;
		printf("%d\n", a);
		break;
	case 2:
		a = 20;
		printf("%d\n", a);
		break;
	case 3:
		a = 30;
		printf("%d\n", a);
		break;
	default:
		a = 100;
		printf("%d\n", a);
		break;
	}
}
