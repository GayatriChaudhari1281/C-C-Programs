#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef struct node
{
	struct node* prev;
	int data;
	struct node *next;
}NODE,*PNODE;

class Doubly_LinkedList
{
private:
	PNODE head;
public:
	Doubly_LinkedList();
	~Doubly_LinkedList();
	BOOL InsertFirst(int);

	void DisplayForward();

	void DisplayBackward();
	
	BOOL InsertLast(int);

	int Count();

	int SearchFirstOcc(int);

	BOOL DeleteFirst();

	BOOL DeleteLast();

	BOOL InsertAtPosition(int,int);

	BOOL DeleteAtPosition(int);
};

Doubly_LinkedList::Doubly_LinkedList()
{
	head=NULL;
}

Doubly_LinkedList::~Doubly_LinkedList()
{
	PNODE temp,navigate;
	if(head!=NULL)
	{
		navigate=head;
		while(navigate!=NULL)
		{
			temp=navigate->next;
			delete navigate;
			navigate=temp;
		}
	}

}

BOOL Doubly_LinkedList :: InsertFirst(int value)
{
	PNODE newnode=NULL;
	newnode=new NODE;
	if(newnode==NULL)
	{
		cout << "Memory not available" << endl;
		return FALSE;
	}
	//initialising  member of structure
	newnode->data=value;
	newnode->next=NULL;
	newnode->prev=NULL;

	if(head==NULL)//if the node is empty
	{
		head=newnode;
	}
	else
	{
		newnode->next=(head);
		head->prev=newnode;
		head=newnode;
	}
	return TRUE;
}

BOOL Doubly_LinkedList :: InsertLast(int value)
{

	PNODE newnode=NULL;
	newnode=new NODE;

	if(newnode==NULL)
	{
		cout << "Memory not available" << endl;
		return FALSE;
	}

	//initialising  member of structure
	newnode->data=value;
	newnode->next=NULL;
	newnode->prev=NULL;

	if(head==NULL)//if the node is empty
	{
		head=newnode;
	}
	else
	{
		PNODE temp =head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
	return TRUE;
}

void Doubly_LinkedList :: DisplayForward()
{
	PNODE temp=head;
	while(temp!=NULL)
	{
		cout << temp->data<<endl;
		temp=temp->next;
	}
}

void Doubly_LinkedList :: DisplayBackward()
{
	PNODE temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	while(temp!=NULL)
	{
		cout << temp->data <<endl;
		temp=temp->prev;
	}
}

int Doubly_LinkedList :: Count()
{
	int icnt=0;
	PNODE temp=head;
	while(temp!=NULL)
	{
		icnt++;
		temp=temp->next;
	}
	return icnt;
}
int Doubly_LinkedList:: SearchFirstOcc(int value)
{
	int icnt=0;
	PNODE temp=head;
	while(temp!=NULL)
	{
		icnt++;
		if(temp->data==value)
		{
			return icnt;
		}
		temp=temp->next;
	}
	return 0;
}

BOOL Doubly_LinkedList:: DeleteFirst()
{
	if(head==NULL)
	{
		return FALSE;
	}
	else
	{
		head=head->next;
		delete head->prev;
		head->prev=NULL;
	}

	return TRUE;
}

BOOL Doubly_LinkedList:: DeleteLast()
{
	PNODE temp=head;
	if(head==NULL)
	{
		return FALSE;
	}
	else if((head)->next==NULL)
	{
		delete head;
		head=NULL;
	}
	else
	{
		struct node* temp=(head);
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		delete temp->next;
		temp->next=NULL;
	}
	return TRUE;
}

BOOL Doubly_LinkedList::InsertAtPosition(int value,int pos)
{
	PNODE temp=head;
	if((pos<=0) || (pos>Count()+1))
	{
		return FALSE;
	}
	else if(pos==1)
	{
		InsertFirst(value);
	}
	else if(pos==Count()+1)
	{
		InsertLast(value);
	}
	else
	{
		PNODE newnode=NULL;
		newnode=new NODE;

		if(newnode==NULL)
		{
			cout << "Memory not available" << endl;
			return FALSE;
		}

		//initialising  member of structure
		newnode->data=value;
		newnode->next=NULL;
		newnode->prev=NULL;

		if(head==NULL)//if the node is empty
		{
			head=newnode;
		}
		while(pos-1>1)
		{
			temp=temp->next;
			pos--;
		}
		newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;
		newnode->prev=temp;
	}
	return TRUE;
}

BOOL Doubly_LinkedList:: DeleteAtPosition(int pos)
{
	if(pos<=0||head==NULL ||pos>Count())
	{
		return FALSE;
	}
	else if(pos==1)
	{
		DeleteFirst();
	}
	else if(pos==Count())
	{
		DeleteLast();
	}
	else
	{
		PNODE temp=head;//traverse
		while(pos-1>1)
		{
			temp=temp->next;
			pos--;
		}
		temp->next=temp->next->next;
		//temp1->next=temp2->next;
		delete temp->next->prev;
		temp->next->prev=temp;
	}
	return TRUE;

}

int main()
{
	Doubly_LinkedList obj;
	int ret=0;
	obj.InsertFirst(11);//function calling
	obj.InsertFirst(21);
	obj.InsertFirst(31);
	obj.InsertFirst(41);
	obj.InsertFirst(51);
	cout << "node entered successfully\n" <<endl;
	cout << "node displayed  in forward direction\n" <<endl;
	
	obj.DisplayForward();
	cout << "node displayed  in Backward direction\n" <<endl;  

	obj.DisplayBackward();
	obj.InsertLast(101);
	cout << "last node entered successfully\n" <<endl;
	
	obj.DisplayForward();
	
	ret = obj.Count();
	cout<<"Total number of node found:"<< ret <<endl;

	int icnt = obj.SearchFirstOcc(51);
	if(icnt==0)
	{
		cout<<"node not found\n";
	}
	else
	{
		cout <<"node found at position:" << icnt <<endl;
	}

	obj.DeleteFirst();
	cout << "first node is deleted\n";
	obj.DisplayForward();

	obj.DeleteLast();
	cout << "last node deleted succesfully\n";
	obj.DisplayForward();

	obj.InsertAtPosition(43,5);
	cout <<"value inserted at given position succesfully\n";
	obj.DisplayForward();

	obj.DeleteAtPosition(3);
	cout << "node deleted at given position\n";
	obj.DisplayForward();
	return 0;
}