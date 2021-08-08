#include"prototype.h"

void breaks()
{
	int i;
	for(i=1;i<10;i++)
	{
		if(i%3==0)
		{
			break;
		}
		printf("%d\t",i);
	}
	printf("\n");
}