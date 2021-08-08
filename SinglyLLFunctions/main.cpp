#include"prototype.h"
#include"structure.h"

 int main()
 {
	 struct node* head=NULL;
	 int arr[5]={10,20,30,40,50};
	 ArrayToLL(arr,5,&head);
	 InsertFirst(&head,5);
	 InsertFirst(&head,3);
	 InsertFirst(&head,41);
	 InsertFirst(&head,51);
	 InsertFirst(&head,6);
	 printf("Values Inserted\n");
	 Display(head);
	 Modify(&head);
	 printf("Modified values are\n");
	 Display(head);
	 ModifySingleDigit(&head);
	 printf("Modified single values are\n");
	 Display(head);
	 BOOL ret=LoopCheck(head);
	 if(ret==TRUE)
		 printf("there is loop in LL\n");
	 else
		 printf("There is no Loop\n");
	 return 0;
 }