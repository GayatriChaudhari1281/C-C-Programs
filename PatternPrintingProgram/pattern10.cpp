#include"prototype.h"
void pattern10(int x, int y)
{
	int i, j, k = 1;
	for (i = 1;i <= x;i++)
	{
		for (j = 1;j <= y;j++)
		{
			printf("%d ", k);
			k++;
		}
		printf("\n");
	}
}