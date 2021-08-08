#include"prototype.h"

void pattern14(int x,int y)
{
	int i, j;
	for (i = 1;i <= x;i++)
	{
		for (j = 1;j <= y;j++)
		{
			if((i==1)||(j==1)||(i==x)||(j==y)||(i==j))
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