#include"prototype.h"
void pattern23(int n)
{
	int i, j;
	for (i = 1;i <=n;i++)
	{
		printf("%d",i);
		for (j = 1;j <= i;j++)
		{
			printf("*");
		}
	}
}