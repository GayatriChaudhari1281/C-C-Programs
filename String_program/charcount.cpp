#include"prototype.h"
int charcount(char* p,char ch)
{
	int no=0;
	while(*p!='\0')
	{
		if(*p==ch)
		{
			no++;
		}
		p++;
	}
	return no;
}