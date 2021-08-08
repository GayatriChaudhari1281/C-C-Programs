#include"prototype.h"

void fibo()
{
	int x=0,y=1,next=0,n;
	printf("enter the number upto which fibonacci should continue\n");
	scanf("%d",&n);
	printf("%d\t",x);
	printf("%d\t",y);
	for(int i=1;i<n-1;i++)
	{
		next=x+y;
		printf("%d\t",next);
		x=y;
		y=next;
	}
}