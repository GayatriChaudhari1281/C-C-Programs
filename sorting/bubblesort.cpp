/*#include<stdio.h>
int main()
{
	int arr[50];
	int i,j,k,n,temp,itr;
	printf("enter the dimensions of array\n");
	scanf("%d",&n);
	flushall();
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	flushall();
	printf("unsorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(itr=0;itr<n-1;itr++)
	{
		for(j=0;j<n-1-itr;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		printf("\nArray after iteration%d\n",itr+1);
		for(k=0;k<n;k++)
			printf("%d\n",arr[k]);
	}
	printf("sorted array is :\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}*/