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
}

Singly_LinkedList::~Singly_LinkedList()
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

	if(head==NULL)//if the node is empty
	{
		head=newnode;
	}
	else
	{
		newnode->next=(head);
		head=newnode;
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
	}
	return TRUE;
}

void Singly_LinkedList :: Display()
{
	PNODE temp=head;
	while(temp!=NULL)
	{
		cout << temp->data<<endl;
		temp=temp->next;
	}
}

int Singly_LinkedList :: Count()
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
int Singly_LinkedList :: SearchFirstOcc(int value)
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

BOOL Singly_LinkedList:: DeleteFirst()
{
	if(head==NULL)
	{
		return FALSE;
	}
	else
	{
		PNODE temp =(head);
		head=((head)->next);
		delete temp;
	}

	return TRUE;
}

BOOL Singly_LinkedList:: DeleteLast()
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
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		delete temp->next;
		temp->next=NULL;
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

int main()
{
	Singly_LinkedList obj;
	int ret=0;
	obj.InsertFirst(11);//function calling
	obj.InsertFirst(21);
	obj.InsertFirst(31);
	obj.InsertFirst(41);
	obj.InsertFirst(51);
	cout << "node entered successfully\n" <<endl;
	
	obj.Display();
	
	obj.InsertLast(101);
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

	obj.InsertAtPosition(43,5);
	cout <<"value inserted at given position succesfully\n";
	obj.Display();

	obj.DeleteAtPosition(3);
	cout << "node deleted at given position\n";
	obj.Display();
	return 0;
}