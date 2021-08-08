#include"prototype.h"

void pattern4(int no)
{
	for(int i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			printf("* ");
		}
		else
		{
			printf("%d ",i);
		}
	}
	printf("\n");
}