#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void printnth(int m,int n)
{

	for (int i = 0; i<8; i++)
	{
		if ( i== n)
			printf("%d/n", (m>>i) & 1);
	}

	return;
}

int main()
{
	int m,n;
	printf("enter m \n");
	scanf("%d", &m);
	printf("enter n \n");
	scanf("%d", &n);
	printnth(m,n);
    return 0;
}

