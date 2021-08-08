#include"prototype.h"
#include"structure.h"

int main()
{
	struct node* head=NULL;
	struct node* head1=NULL;
	int pos;
	InsertFirst(&head,8);//function calling
	printf("node entered successfully\n");
	InsertFirst(&head,5);
	InsertFirst(&head,3);
	InsertFirst(&head,41);
	InsertFirst(&head,51);
	InsertFirst(&head,61);
	Display(head); 
	
	InsertLast(&head, 101);
	printf("last node entered successfully\n");
	
	Display(head);
	
	int ret = Count(head);
	printf("Total number of node found:%d\n",ret);

	int icnt = SearchFirstOcc(head,51);
	if(icnt==0)
	{
		printf("node not found\n");
	}
	else
	{
		printf("node found at position:%d\n",icnt);
	}

	DeleteFirst(&head);
	printf("first node is deleted\n");
	Display(head);

	DeleteLast(&head);
	printf("last node deleted succesfully\n");
	Display(head);

	InsertAtPosition(&head,43,2);
	printf("value inserted at given position succesfully\n");
	Display(head);

	DeleteAtPosition(&head,3);
	printf("node deleted at given position\n");
	Display(head);

	int n;
	printf("enter the number of nodes wants to display");
	scanf("%d",&n);
	flushall();
	DisplayN(head,n);
	printf("data of odd numbered nodes displayed");
	DisplayOddNode(head);
	printf("sum of two consecutive nodes is displayed");
	DisplaySum(head);
	printf("last 3 nodes displayed");
	Displaylast3(head);

	InsertFirst(&head1,32);
	InsertFirst(&head1,356);
	InsertFirst(&head1,413);
	InsertFirst(&head1,31);
	InsertFirst(&head1,61);
	InsertFirst(&head,61);
	InsertFirst(&head,71);

	/*concat(&head,&head1);
	printf("concated LL is :");
	Display(head);
	printf("enter the position of node where LL has to concat");
	scanf("%d\n",&pos);
	flushall();
	concatAt(&head,&head1,pos);
	BOOL cam= campare(head,head1);
	if(cam==TRUE)
		printf("LL are equal");
	else
		printf("LL are not equal"); 
	printf("%d",middlenode(head));*/
	Deletefrom(&head,7);
	DeleteAll(&head);
	DeleteSpecific(&head,11);
	return 0;
}