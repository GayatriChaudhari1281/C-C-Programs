#include"prototype.h"

int main()
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	multitable(n);
	fact(n);
	fibo();
	printf("enter any number\n");
	scanf("%d",&n);
	int ret=prime(n);
	if(ret==0)
	{
		printf("%d is prime \n",n);
	}
	else
	{
		printf("number is not prime\n");
	}
	printf("enter any digit to reverse it\n");
	scanf("%d",&i);
	revdigit(i);
	sumdigit(i);
	genericroot(i);
	maxdigit(i);
	mindigit(i);
	countdigit(i);
	breaks();
	continues();
	return 0;
}
