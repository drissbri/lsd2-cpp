#include "../includes/bitwise.h"

void print_bits(unsigned char byte)
{
	int i, j;

	j = 7;
	i = 1 << j;
	while (i > 0)
	{
		if (byte & i)
			printf("1");
		else
			printf("0");
		j--;
		i = 1 << j;
	}
	printf("\n");
}
