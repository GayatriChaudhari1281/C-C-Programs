#include"prototype.h"

void pattern6(int no)
{
	int j=1;
	for(int i=1;i<=no;i++)
	{
		printf("%d",j);
		j++;
		if(j==4)
		{
			j=1;
		}
	}
	printf("\n");
}