#include"prototype.h"

void revdigit(int n)
{
	int rem;
	while(n>0)
	{
		rem=n%10;
		printf("%d", rem);
		n=n/10;
	}
	printf("\n");
}