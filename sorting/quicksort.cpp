/*#include<stdio.h>
//time complexity for worst case is O(n^2) and for average case O(nlogn)
int Partition(int A[],int lb,int ub)
{
	int pivot,start,end,temp;
	pivot=A[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(A[start]<=pivot)
		{
			start++;
		}
		while(A[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=A[start];
			A[start]=A[end];
			A[end]=temp;
		}
	}
	temp=A[lb];
	A[lb]=A[end];
	A[end]=temp;
	return end;
}

void Quicksort(int A[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc=Partition(A,lb,ub);
		Quicksort(A,lb,loc-1);
		Quicksort(A,loc+1,ub);
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
	Quicksort(A,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
		
	}

	return 0;
}*/