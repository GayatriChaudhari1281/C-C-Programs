#include<iostream>
using namespace std;

typedef int  BOOL;
#define TRUE 1
#define FALSE 0

typedef struct node
{
	int eid;
	char ename[30];
	long int salary;
	struct node* next;
}STACK,*PSTACK;

class stack
{
private:
	PSTACK head;
public:
	stack();
	~stack();
	BOOL IsStackEmpty();
	void push(int, char*,long int);
	void pop();
};
stack::stack()
{
	head=NULL;
}
stack::~stack()
{
	PSTACK temp,navigate;
	if(head!=NULL)
	{
		navigate=head;
		while(navigate!=NULL)
		{
			temp=navigate->next;
			delete navigate;
			navigate=temp;
		}
		head=NULL;
	}
}

BOOL stack ::IsStackEmpty()
{
	if(head==NULL)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void stack::push(int id,char*name,long int amt)
{
	PSTACK newnode=NULL;
	newnode= new STACK;
	if(newnode==NULL)
	{
		cout<<"Memory Not Available\n";
	}
	newnode->eid=id;
	strcpy(newnode->ename,name);
	newnode->next=NULL;
	newnode->salary=amt;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		PSTACK temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void stack ::pop()
{
	if(IsStackEmpty())
	{
		cout<<"Nodes are not available\n";
		return;
	}
	else if((head)->next==NULL)
	{
		cout<<(head)->eid<<"\t"<<(head)->salary<<"\t"<<(head)->ename<<endl;
		free(head);
		head=NULL;
	}
	else
	{
		struct node* temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		cout <<(temp->next)->eid<<"\t"<<(temp->next)->salary<<"\t"<<(temp->next)->ename<<endl;
		free(temp->next);
		temp->next=NULL;
	}
}
int main()
{
	PSTACK *head=NULL;
	stack obj;
	cout <<"size of structure"<< sizeof(struct node)<<endl;
	obj.push(11,"gayatri",35000);
	obj.push(23,"Dhiraj",56000);
	obj.push(22,"Suresh",74000);
	cout<<"stack inserted succesfully\n";
	obj.pop();
	obj.pop();
	obj.pop();
	return 0;
}