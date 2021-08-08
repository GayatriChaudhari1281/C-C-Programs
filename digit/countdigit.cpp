#include"prototype.h"

void countdigit(int n)
{
	int i=0;
	while(n>0)
	{
		n=n/10;
		i++;
	}
	printf("number of digits is: %d\n",i);
}