#ifndef EX3
#define EX3

#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void printbits(unsigned char byte)
{
	for (int i = 0; i<8; i++)
	{
	printf("%d", (byte>>i) & 1);
	}

	return;
}


void check_msb(int n)
{
	if (n == 1)
		printf("msb is set\n");
	else 
		printf("msb is set\n");
	return;
}



#endif
