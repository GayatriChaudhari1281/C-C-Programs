/*#include<stdio.h>

void bsearch(int a[],int no,int lb ,int ub)
{
	int mid;
	if(lb>ub)
	{
		printf("given no.is not found\n");
	}
	else
	{
		mid=(lb+ub)/2;
		if(a[mid]==no)
			printf("Number foundd at position:%d\n",mid+1);
		else
		{
			if(a[mid]>no)
				bsearch(a,no,lb,mid-1);
			else
				bsearch(a,no,mid+1,ub);
		}
	}
}

int main()
{
	int arr[50],i,n,no;
	printf("enter the dimension of array\n");
	scanf("%d",&n);
	flushall();
	printf("enter array elements in sorted order\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	flushall();
	printf("enter the no. to be search\n");
	scanf("%d",&no);
	bsearch(arr,no,0,n-1);
	return 0;
}*/