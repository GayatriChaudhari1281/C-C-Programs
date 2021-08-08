#include"prototype.h"

void pattern20(int x,int y)
{
	int i, j;
	for (i = 1;i <= x;i++)
	{
		for (j = 1;j <= y;j++)
		{
			if(i>=j)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}