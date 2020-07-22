#include <stdio.h>
#include <string.h>

int main()
{
	char *name = "Rafael";
	char *otherName = "Juan";
	char dst[20] = "Esto es privado";

	printf("str mide %ld caracteres\n", strlen(name));
	printf("Los nombres son %s\n", strcmp(name, otherName) == 0 ? "iguales" : "distintos");

	strcpy(dst, name);
	printf("string copiado %s\n", dst);

	return 0;
}
