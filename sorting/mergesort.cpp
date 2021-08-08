/*#include<stdio.h>
//Time complexity in both worts and best case is O(nlogn)
void Merge(int A[],int lb,int mid,int ub)
{
	int B[50];
	int i,j,k;
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub)
	{
		if(A[i]<=A[j])
		{
			B[k]=A[i];
			i++;
		}
		else
		{
			B[k]=A[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			B[k]=A[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			B[k]=A[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		A[k]=B[k];
	}
}

void Mergesort(int A[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		Mergesort(A,lb,mid);
		Mergesort(A,mid+1,ub);
		Merge(A,lb,mid,ub);
	}
}

int main()
{
	int A[50];
	int n;
	printf("enter size of sort");
	scanf("%d",&n);
	flushall();
	printf("enter the numbers to sort");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		
	}
	Mergesort(A,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
		
	}

	return 0;
}*/