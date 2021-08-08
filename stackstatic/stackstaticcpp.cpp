#include<iostream>
using namespace std;

typedef int  BOOL;
#define TRUE 1
#define FALSE 0
#define SIZE 5

int stacks[SIZE];
int top=-1;
class stack
{
public:
	BOOL IsStackEmpty();
	BOOL IsStackFull();
	void push(int value);
	int pop();
	int pipe();
};
BOOL stack::IsStackEmpty()
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
BOOL stack::IsStackFull()
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
void stack::push(int value)
{
	if(!IsStackFull())
	{
		stacks[++top]=value;
	}
}
int stack::pop()
{
	int value=0;
	if(!IsStackEmpty())
	{
		value=stacks[top--];
		return value;
	}
	return -1;
}

int stack:: pipe()
{
	int value=0;
	if(!IsStackEmpty())
	{
		value=stacks[top];
		return value;
	}
	return -1;
}
int main()
{
	stack obj;
	obj.push(11);
	obj.push(21);
	obj.push(31);
	obj.push(41);
	obj.push(51);
	printf("%d\n",obj.pop());
	printf("%d\n",obj.pop());
	printf("%d\n",obj.pipe());
	printf("%d\n",obj.pop());
	obj.push(101);
	printf("%d\n",obj.pop());
	return 0;
}
