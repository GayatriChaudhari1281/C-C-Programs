#include"prototype.h"

void pattern18(int x,int y)
{
	int i, j;
	for (i = 1;i <= x;i++)
	{
		for (j = 1;j <= y;j++)
		{
			if(i>j)
			{
				printf("* ");
			}
			else if(i==j)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}