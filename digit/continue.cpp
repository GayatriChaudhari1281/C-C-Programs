#include"prototype.h"

void continues()
{
	int i;
	for(i=1;i<10;i++)
	{
		if(i%3==0)
		{
			continue;
		}
		printf("%d\t",i);
	}
	printf("\n");
	for(i=1;i<10;i++);
	{
		printf("%d\t",i);
	}
}