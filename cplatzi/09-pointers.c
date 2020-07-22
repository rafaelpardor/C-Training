#include <stdio.h>

int main()
{
	int number = 10;
	int *pointerToNumber = &number;

	printf("%d\n", number);
	// pointerToNumber is pointer-int data type
	printf("%d - %p.\n", *pointerToNumber, pointerToNumber);
	printf("%p - %d.\n", *pointerToNumber, pointerToNumber);
	return 0;
}
