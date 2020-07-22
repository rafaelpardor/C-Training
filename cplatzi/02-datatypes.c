#include <stdio.h>

int main()
{
	int myNumber;
	float myFloat = 3.14;
	char letter = 'R';
	char name[10] = "Rafael";

	myNumber = 20;
	printf("Data type number: %d\n", myNumber);

	myNumber = myNumber + 2;
	printf("Data type number: %d\n\n", myNumber);
	printf("Data type float: %f\n", myFloat);
	printf("Data type char: %d\n", letter);
	printf("Data type string: %s\n", name);

	unsigned char myByte1 = 5;
	unsigned char myByte2 = 2;
	printf("a=%x, b=%d\n", myByte1, myByte2);
	printf("a&b= %d\n", myByte1 & myByte2);
	printf("a|b= %d\n", myByte1 | myByte2);
	printf("a^b= %d\n", myByte1 ^ myByte2);
}
