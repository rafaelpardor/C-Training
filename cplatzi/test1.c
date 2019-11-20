#include<stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mult(int a,int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}

int main()
{
	printf("Suma: %d\n", sum(1,2));
	printf("Resta: %d\n", sub(1,2));
	printf("Multiplicacion: %d\n", mult(3,2));
	printf("Division: %d\n", div(2,2));
}
