#include"prototype.h"

void mindigit(int n)
{
	int rem,min=9;
	while(n>0)
	{
		rem=n%10;
		if(min>rem)
		{
			min=rem;
		}
		n=n/10;
	}
	printf("smallest digit is : %d\n",min);
}