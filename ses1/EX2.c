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

int main()
{
	int n;
	printf("enter n \n");
	scanf("%d", &n);
	printbits(n);
    return 0;
}

