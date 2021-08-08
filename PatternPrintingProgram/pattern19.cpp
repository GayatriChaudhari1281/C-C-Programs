#include"prototype.h"

void pattern19(int x,int y)
{
	int i, j;
	for (i = 1;i <= x;i++)
	{
		for (j = 1;j <= y;j++)
		{
			if(i%2==0)
			{
				printf("* ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}