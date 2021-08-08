#include"prototype.h"
#include"structure.h"

int main()
{
	struct node *head=NULL;
	InsertFirst(&head,11);
	InsertFirst(&head,21);
	InsertFirst(&head,31);
	InsertFirst(&head,51);
	printf("Node inserted at first position\n");
	printf("Node displayed in Forward direction\n");
	DisplayForward(head);
	printf("Node displayed in Backward direction\n");
	DisplayBackward(head);

	InsertLast(&head,101);
	printf("Node inserted at last position\n");
	DisplayForward(head);

	DeleteFirst(&head);
	printf("first node is deleted\n");
	DisplayForward(head);

	DeleteLast(&head);
	printf("last node deleted succesfully\n");
	DisplayForward(head);

	int ret = Count(head);
	printf("Total number of node found:%d\n",ret);

	int icnt = SearchFirstOcc(head,21);
	if(icnt==0)
	{
		printf("node not found\n");
	}
	else
	{
		printf("node found at position:%d\n",icnt);
	}

	InsertAtPosition(&head,43,4);
	printf("value inserted at given position succesfully\n");
	DisplayForward(head);

	DeleteAtPosition(&head,3);
	printf("node deleted at given position\n");
	DisplayForward(head);
	return 0;
}