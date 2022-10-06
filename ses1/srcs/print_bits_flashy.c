#include "../includes/bitwise.h"

void print_bits_flashy(unsigned char byte)
{
	int i;
	
	i = 1 << 7;
	while(i > 0)
	{
		(byte & i) ? printf("1") : printf("0");
		i /= 2;
	}
	printf("\n");
}
