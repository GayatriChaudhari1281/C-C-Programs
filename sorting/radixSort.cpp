/*#include<stdio.h>

int getMax(int a[],int n)
{
	int k=a[0];
	for(int i=1;i<n;i++)
	{
		if(k<a[i])
		{
			k=a[i];
		}
	}
	//printf("%d",k);
	return k;
}

void CountSort(int a[],int n,int pos)
{
	int i;
	int count[10]={0},b[50];
	for(i=0;i<n;i++)
	{
		count[(a[i]/pos)%10]++;
	}
	for(i=1;i<10;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		b[count[(a[i]/pos)%10]-1]=a[i];
		count[(a[i]/pos)%10]--;
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
void RadixSort(int a[],int n)
{
	int pos,max;
	max=getMax(a,n);
	for(pos=1;(max/pos)>0;pos*=10)
	{
		CountSort(a,n,pos);
	}
}

int main()
{
	int a[50],b[50],count[50];
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	flushall();
	printf("enter the elements of array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	flushall();
	RadixSort(a,n);
	printf("sorted array is \n");
	for(int j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
	}
	return 0;
}*/