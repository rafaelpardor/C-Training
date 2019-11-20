#include<stdio.h>

int main()
{
	int number = 10;
	int * pointerTonumber = &number;

	printf("%p - %d.\n",pointerTonumber, *pointerTonumber);
	return 0;	
}
