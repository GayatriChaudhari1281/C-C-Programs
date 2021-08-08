#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef struct node
{
	struct node* lchild;
	int data;
	struct node* rchild;
}NODE,*PNODE;

class trees
{
public:
	void Insert(struct node** root,int value);
	BOOL Search(struct node* root,int value);
	void Inorder(struct node* root);
	void Preorder(struct node* root);
	void Postorder(struct node* root);
};
void trees::Insert(struct node** root,int value)
{
	struct node* newnode=NULL;
	if(*root==NULL)
	{
		newnode=new NODE;
		newnode->lchild=NULL;
		newnode->data=value;
		newnode->rchild=NULL;
		(*root)=newnode;
	}
	else if(value<(*root)->data)
	{
		Insert(&(*root)->lchild,value);
	}
	else if(value>(*root)->data)
	{
		Insert(&(*root)->rchild,value);//local variable,ni,old ebp,parameter
	}
}

BOOL trees::Search(struct node* root,int value)
{
	if(root==NULL)
	{
		return FALSE;
	}
	else if(value<root->data)
	{
		Search(root->lchild,value);
	}
	else if(value>root->data)
	{
		Search(root->rchild,value);
	}
	else if(value==root->data)
	{
		return TRUE;
	}
}

void trees::Inorder(struct node* root)
{
	if(root!=NULL)
	{
		Inorder(root->lchild);
		cout  <<root->data<<"\n";
		Inorder(root->rchild);
	}
}

void trees::Preorder(struct node* root)
{
	if(root!=NULL)
	{
		cout <<root->data<< "\n" ;
		Preorder(root->lchild);
		Preorder(root->rchild);
	}
}

void trees::Postorder(struct node* root)
{
	if(root!=NULL)
	{
		Postorder(root->lchild);
		Postorder(root->rchild);
		cout<< root->data << "\n";
	}
}
int main()
{
	PNODE tree=NULL;
	trees obj;
	obj.Insert(&tree,11);
	obj.Insert(&tree,32);
	obj.Insert(&tree,45);
	obj.Insert(&tree,4);
	obj.Insert(&tree,55);
	obj.Insert(&tree,98);
	obj.Insert(&tree,5);
	obj.Insert(&tree,3);
	obj.Insert(&tree,44);
	obj.Insert(&tree,66);
	cout<< "Nodes Inserted succesfully\n";
	BOOL ret=obj.Search(tree,45);
	if(ret==TRUE)
		cout << "Node Found\n";
	else
		cout << "Node Not Found\n";
	cout << "Inorder nodes\n";
	obj.Inorder(tree);
	cout << "Preorder nodes\n";
	obj.Preorder(tree);
	cout << "Postorder nodes\n";
	obj.Postorder(tree);
	return 0;
}