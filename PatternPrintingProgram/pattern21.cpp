#include"prototype.h"

void pattern21(int x,int y)
{
	int i, j;
	for (i = x;i >=1;i--)
	{
		for (j = 1;j <= i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}