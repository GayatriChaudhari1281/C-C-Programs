#include"prototype.h"
int main()
{
	char ch;
	char str[]={'\0'};
	printf("enter the string\n ");
	scanf("%[^\n]",str);
	flushall();
	printf("enter the charater\n ");
	scanf("%c",&ch);
	int ret=strchrfirst(str,ch);
	if(ret==-1)
	{
		printf("character not found in the string\n");
	}
	else
	{
		printf("character found at %d\n",ret);
	}
	ret=charcount(str,ch);
	printf("entered character found :%d times\n",ret);
	return 0;
}
