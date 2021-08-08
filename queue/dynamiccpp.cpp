/*#include<iostream>
using namespace std;

typedef int  BOOL;
#define TRUE 1
#define FALSE 0

typedef struct node 
{
	int data;
	struct node* next;
}NODE,*PNODE;

class queue
{
	PNODE head;
	PNODE tail;
public:
	queue();
	~queue();
	void Enqueue(int value);
	int Dequeue();
	void Traverse();
};
queue::queue()
{
	head=NULL;
	tail=NULL;
}
queue::~queue()
{
	PNODE temp=NULL,navigate=NULL;
	if((head!=NULL))
	{
		navigate=head;
		do
		{
			temp=navigate->next;
			delete navigate;
			navigate=temp;
		}while(navigate!=NULL);
		head=tail=NULL;
	}
}

void queue::Enqueue(int value)
{
	PNODE newnode=NULL;
	newnode=new NODE;
	if(newnode==NULL)
	{
		cout<<"memory not available";
		return;
	}
	newnode->data=value;
	newnode->next=NULL;
	if((head==NULL)&&(tail==NULL))
	{
		head=tail=newnode;
	}
	else
	{
		(tail)->next=newnode;
		(tail)=(tail)->next;
	}
}

int queue:: Dequeue()
{
	int ret=0;
	if(((head) == NULL) && ((tail) == NULL))//if queue is empty
	{
		return -1;
	}
	else if((head)==(tail))//only one node
	{
		ret=(head)->data;
		delete head;
		head=tail=NULL;
	}
	else //more than one node
	{
		PNODE temp =head;
		ret=(head)->data;
		head=(head)->next;
		delete temp;
	}
	return ret;
}

void queue:: Traverse()
{
	PNODE temp =head;
	while(temp!=NULL)
	{
		cout << temp->data<<endl;
		temp=temp->next;
	}
}
int main()
{
	queue obj;
	obj.Enqueue(11);
    obj.Enqueue(21);
	obj.Enqueue(31);
	obj.Enqueue(41);
	obj.Enqueue(51);
	obj.Enqueue(61);

	obj.Traverse();
	cout<<"deleted nodes are\n";
	cout <<obj.Dequeue()<<endl;
	cout <<obj.Dequeue()<<endl;
	cout <<obj.Dequeue()<<endl;
	cout <<obj.Dequeue()<<endl;
	cout<<"After Deletion \n";
	obj.Traverse();

	return 0;
}*/