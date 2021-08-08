#include"prototype.h"
#include"structure.h"

void Modify(struct node** first)
{
	struct node* t1=(*first);
	struct node* t2=NULL;
	if(*first==NULL||(*first)->next==NULL)
	{
		return;
	}
	while(t1->next!=NULL)
	{
		if((t1->next->data)<10)
		{
			t1->data=(t1->data)+(t1->next->data);
			t2=t1->next;
			t1->next=t2->next;
			free(t2);//continue instead of else
		}
		else
		{
			t1=t1->next;
		}
		
	}
}