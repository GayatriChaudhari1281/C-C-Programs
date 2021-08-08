#include"Prototype.h"
#include"structure.h"
int main()
{
	struct node* root=NULL;
	Insert(&root,45);
	Insert(&root,25);
	Insert(&root,55);
	Insert(&root,15);
	Insert(&root,35);
	Insert(&root,5);
	Insert(&root,77);
	Insert(&root,88);
	Insert(&root,65);
	printf("Nodes Inserted succesfully\n");
	BOOL ret=Search(root,45);
	if(ret==TRUE)
		printf("Node Found\n");
	else
		printf("Node Not Found\n");
	printf("Inorder nodes\n");
	Inorder(root);
	printf("Preorder nodes\n");
	Preorder(root);
	printf("Postorder nodes\n");
	Postorder(root);
	int value;
	scanf("%d",&value);
	ParentNode(root,value);
	return 0;
}