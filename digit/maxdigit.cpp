#include"prototype.h"

void maxdigit(int n)
{
	int rem,max=0;
	while(n>0)
	{
		rem=n%10;
		if(max<rem)
		{
			max=rem;
		}
		n=n/10;
	}
	printf("largest digit is : %d\n",max);
}