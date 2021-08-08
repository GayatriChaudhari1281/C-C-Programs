#include"prototype.h"

int prime(int n)
{
	int i,flag=0;
	if(n==1)
	{
		return -1;
	}
	for(i=2;i<n;i++)
	{
		if(n%2==0)
		{
			flag=1;
		}
	}
	return flag;
}