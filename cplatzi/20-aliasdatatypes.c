#include <stdio.h>

typedef char NAME[50];
typedef int AGE;

int main()
{
	NAME myName = "Rafael";
	AGE myAge = 20;

	printf("%s %d\n", myName, myAge);
	return 0;
}
