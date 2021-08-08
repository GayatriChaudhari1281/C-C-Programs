/*#include<stdio.h>

typedef int  BOOL;
#define TRUE 1
#define FALSE 0

#define SIZE 5

int stack[SIZE];
int top=-1;

BOOL IsStackEmpty()
{
	if(top==-1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

BOOL IsStackFull()
{
	if(top==SIZE-1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void push(int value)
{
	if(!IsStackFull())
	{
		stack[++top]=value;
	}

}

int pop()
{
	int value=0;
	if(!IsStackEmpty())
	{
		value=stack[top--];
		return value;
	}
	return -1;
}

int pipe()
{
	int value=0;
	if(!IsStackEmpty())
	{
		value=stack[top];
		return value;
	}
	return -1;
}

int main()
{
	push(11);
	push(21);
	push(31);
	push(41);

	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pipe());
	printf("%d\n",pop());
	push(101);
	printf("%d\n",pop());
	
	return 0;
}*/