#include<stdio.h>

void duplicar(int * a)
{
	*a *= 2;
}


int main()
{
	int a =5;

	printf("Valor de a antes de pasar por funcion: %d\n",a);
	duplicar(&a);
	printf("Valor de a despues de ser modificada: %d\n",a);
}
