#include"prototype.h"

void sumdigit(int n)
{
	int rem=0,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of all digits is : %d\n",sum);
}