#include"prototype.h"
#include"structure.h"

void DeleteSpecific(struct node** first,int value)
{
	if(*first==NULL)
	{
		return;
	}
	struct node* temp1=*first;
	struct node* temp2=NULL;
	while(temp1!=NULL)
	{
		if(temp1->data==value)
		{
			*first=temp1->next;
			free(temp1);
			temp1=(*first);
		}
		else if(temp1->next->data==value)
		{
			temp2=temp1->next;
			temp1->next=temp2->next;
			free(temp2);
		}
		else
		{
			temp1=temp1->next;
			if(temp1==NULL)
			{
				return;
			}//if close
		}//else close
	}//while close
}//function close