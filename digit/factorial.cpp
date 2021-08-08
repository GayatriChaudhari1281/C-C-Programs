#include"prototype.h"

void fact(int no)
{
	int i,fact=1;
	if(no==0)
	{
		printf("%d\n",fact);
	}
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("%d\n",fact);
}