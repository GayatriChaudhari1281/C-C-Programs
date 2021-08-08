#include"prototype.h"
 
void pattern5(int no)
{
	int j=1;
	for(int i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			printf("* ");
		}
		else
		{
			printf("%d ",j);
			j++;
		}
	}
	printf("\n");
}