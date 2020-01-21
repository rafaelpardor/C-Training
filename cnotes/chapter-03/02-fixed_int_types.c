#include<stdio.h>
int main()
{
	__uint64_t i64 = -65; /*Exactly 64 bit in two's complemnt representation*/
	__uint32_t u32 = 32; /*Exactly 32 bits wide*/
	__uint8_t u8 = 255; /*Exactly 8 bits wide*/
	
	printf("%ld\n", i64);
	printf("%d\n", u32);
	printf("%d\n", u8);

}
