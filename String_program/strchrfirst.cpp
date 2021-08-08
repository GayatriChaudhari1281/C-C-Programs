#include"prototype.h"
int strchrfirst(char*p ,char ch)
{
	int i=1;
	if(p==NULL)
	{
		printf("memory not available");
		return -1;
	}
	while(*p!='\0')
	{
		if(*p==ch)
		{
			return i;
		}
		else
		{
			i++;
		}
		p++;
	}
	return -1;
}