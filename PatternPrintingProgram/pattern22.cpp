#include"prototype.h"

void pattern22(int x,int y)
{
	int i, j;
	for (i = 1;i <= x;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if(j%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}