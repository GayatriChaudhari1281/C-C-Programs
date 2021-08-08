#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class Singly_LinkedList
{
private:
	PNODE head;
	PNODE tail;
public:
	Singly_LinkedList();
	~Singly_LinkedList();
	BOOL InsertFirst(int);

	void Display();
	
	BOOL InsertLast(int);

	int Count();

	int SearchFirstOcc(int);

	BOOL DeleteFirst();

	BOOL DeleteLast();

	BOOL InsertAtPosition(int,int);

	BOOL DeleteAtPosition(int);
};

Singly_LinkedList::Singly_LinkedList()
{
	head=NULL;
	tail=NULL;
}

Singly_LinkedList::~Singly_LinkedList()
{
	PNODE temp,navigate;
	if((head!=NULL)&&(tail!=NULL))
	{
		navigate=head;
		do
		{
			temp=navigate->next;
			delete navigate;
			navigate=temp;
		}while(navigate!=head);
	}

}

BOOL Singly_LinkedList :: InsertFirst(int value)
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

	if((head==NULL) && (tail==NULL))//if the node is empty
	{
		head=tail=newnode;
		tail->next=head;
	}
	else
	{
		newnode->next=(head);
		head=newnode;
		tail->next=head;
	}
	return TRUE;
}

BOOL Singly_LinkedList :: InsertLast(int value)
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

	if((head==NULL) && (tail==NULL))//if the node is empty
	{
		head=tail=newnode;
		tail->next=head;
	}
	else
	{
		tail->next=newnode;
		tail=newnode;
		tail->next=head;
	}
	return TRUE;
}

void Singly_LinkedList :: Display()
{
	PNODE temp=head;
	if((head!=NULL)&&(tail!=NULL))
	{
		do
		{
			cout << temp->data << endl;
			temp=temp->next;
		}while(temp!=head);
	}
	else
	{
		cout << "LL is empty node not available\n";
	}
}

int Singly_LinkedList :: Count()
{
	int icnt=0;
	PNODE temp=head;
	if(head!=NULL&&tail!=NULL)//if LL is empty null->data is segmentation fault
	{
		do
		{
			temp=temp->next;
			icnt++;
		}while(temp!=head);
	}
	else
	{
		printf("LL is empty node not available");
	}
	return icnt;
}

int Singly_LinkedList :: SearchFirstOcc(int value)
{
	int icnt=0;
	PNODE temp=head;
	if(head!=NULL&& tail!=NULL)//if LL is empty null->data is segmentation fault
	{
		do
		{
			icnt++;
			if(temp->data==value)
			{
				return icnt;
			}
			temp=temp->next;
		}while(temp!=head);
	}
	else
	{
		printf("LL is empty node not available");
	}
	return 0;
}

BOOL Singly_LinkedList:: DeleteFirst()
{
	if((head==NULL)&& (tail=NULL))
	{
		return FALSE;
	}
	else if(head==tail)
	{
		delete head;
		head=tail=NULL;
	}
	else
	{
		head=((head)->next);
		delete tail->next;
		tail->next=head;
	}

	return TRUE;
}

BOOL Singly_LinkedList:: DeleteLast()
{
	PNODE temp=head;
	if((head==NULL) && (tail==NULL))
	{
		return FALSE;
	}
	else if(head==tail)
	{
		delete head;
		head=tail=NULL;
	}
	else
	{
		PNODE temp=(head);
		while(temp->next!=tail)
		{
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		tail->next=head;
	}
	return TRUE;
}

BOOL Singly_LinkedList:: DeleteAtPosition(int pos)
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
		PNODE temp1=head;//traverse
		PNODE temp2=NULL;//store address of deleting node
		while(pos-1>1)
		{
			temp1=temp1->next;
			pos--;
		}
		temp2=temp1->next;
		temp1->next=temp1->next->next;
		//temp1->next=temp2->next;
		delete temp2;
	}
	return TRUE;

}

BOOL Singly_LinkedList::InsertAtPosition(int value,int pos)
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
		PNODE temp=head;
		newnode=new NODE;

		if(newnode==NULL)
		{
			cout << "Memory not available" << endl;
			return FALSE;
		}

		//initialising  member of structure
		newnode->data=value;
		newnode->next=NULL;

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
		temp->next=newnode;
	}
	return TRUE;
}
int main()
{
	Singly_LinkedList obj;
	int ret=0;
	obj.InsertFirst(11);//function calling
	obj.InsertFirst(21);
	obj.InsertFirst(31);
	obj.InsertFirst(41);
	obj.InsertFirst(51);
	obj.InsertFirst(61);
	cout << "node entered successfully\n" <<endl;
	obj.Display();
	
	obj.InsertLast(211);
	cout << "last node entered successfully\n" <<endl;
	obj.Display();
	
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
	obj.Display();

	obj.DeleteLast();
	cout << "last node deleted succesfully\n";
	obj.Display();

	obj.InsertAtPosition(43,3);
	cout <<"value inserted at given position succesfully\n";
	obj.Display();

	obj.DeleteAtPosition(3);
	cout << "node deleted at given position\n";
	obj.Display();
	return 0;
}