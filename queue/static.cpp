/*#include<stdio.h>

typedef int  BOOL;
#define TRUE 1
#define FALSE 0

#define SIZE 5

int arr[SIZE],rare=0,front=-1;

BOOL IsQueueEmpty()
{
	if(front==rare)
	{
		front=rare=-1;
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
 BOOL IsQueueFull()
 {
	 if(rare==SIZE)
	 {
		 return TRUE;
	 }
	 else
	 {
		 return FALSE;
	 }
 }

 void Enqueue(int no)
 {
	 if(!IsQueueFull())
	 {
		 arr[rare++]=no;
	 }
 }

 int Dequeue()
 {
	 if(!IsQueueEmpty())
	 {
		 front=front+1;
		 return arr[front];
	 }
 }

 int main()
 {
	 Enqueue(11);
	 Enqueue(21);
	 Enqueue(31);
	 Enqueue(41);
	 printf("%d\n",Dequeue());
	 printf("%d\n",Dequeue());
	 printf("%d\n",Dequeue());
	 printf("%d\n",Dequeue());
	 return 0;
 }*/