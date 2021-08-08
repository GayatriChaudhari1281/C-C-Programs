/*#include<stdio.h>
//best case input is an array that is already sorted. In this case insertion sort has a linear running time (i.e., O(n))
// worst case input is an array sorted in reverse order.i.e.O(n2)
//average case is also quadratic
// insertion sort is one of the fastest algorithms for sorting very small arrays, even faster than quicksort
int main()
{
	int arr[30];
	int i,j,k,n,temp;
	printf("Enter dimensions of an array\n");
	scanf("%d\n",&n);
	flushall();
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	flushall();
	printf("Unsorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(j=1;j<n;j++)
	{
		temp=arr[j];
		printf("Inserted element is%d\n",temp);
		for(i=j-1;i>=0 && temp<arr[i];i--)
		{
			arr[i+1]=arr[i];
		}
		arr[i+1]=temp;
		printf("\nArray after iteration%d\n",j);
		for(k=0;k<n;k++)
		{
			printf("%d\n",arr[k]);
		}
		
		
	}
	printf("\n sorted array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}*/