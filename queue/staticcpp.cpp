#include<iostream>
using namespace std;

typedef int  BOOL;
#define TRUE 1
#define FALSE 0
#define SIZE 5

class queue
{
public:
	int arr[SIZE],rare,front;
	queue();
	BOOL IsQueueEmpty();
	BOOL IsQueueFull();
	void Enqueue(int no);
	int Dequeue();
};
queue::queue()
{
	rare=0;
	front=-1;
}

BOOL queue:: IsQueueEmpty()
{
	if(front==rare)
	{
		//front=rare=-1;
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

BOOL queue::IsQueueFull()
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

void queue::Enqueue(int no)
 {
	 if(!IsQueueFull())
	 {
		 arr[rare++]=no;
	 }
 }

 int queue::Dequeue()
 {
	 if(!IsQueueEmpty())
	 {
		 front=front+1;
		 return arr[front];
	 }
 }

 int main()
 {
	 queue obj;
	 obj.Enqueue(11);
	 obj.Enqueue(21);
	 obj.Enqueue(31);
	 obj.Enqueue(41);
	 obj.Enqueue(56);
	 obj.Enqueue(89);
	 cout<<obj.Dequeue()<<endl;
	 cout<<obj.Dequeue()<<endl;
	 cout<<obj.Dequeue()<<endl;
	 cout<<obj.Dequeue()<<endl;
	 return 0;
 }