#include"prototype.h"
void pattern13(int x, int y)
{
	int i, j, k = 1;
	for (i = 1;i <= x;i++)
	{
		for (j = 1;j <= y;j++)
		{
			if(i==j)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
}