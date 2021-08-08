#include"prototype.h"

void pattern11(int x,int y)
{
	int i, j, k = 1;
	for (i = 1;i <= x;i++)
	{
		for (j = 1;j <= y;j++)
		{
			printf("%d ", k);
			k++;
			if(k==10)
			{
				k=1;
			}
		}
		printf("\n");
	}
}