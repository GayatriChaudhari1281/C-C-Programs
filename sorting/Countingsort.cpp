//finding key value minimum and maximum value and at particular index and increment repective frequency of number in another array
//negative elements are not allowed

#include<stdio.h>
void counting_sort(int A[], int k, int n)
{
    int i, j;
    int B[15], C[100];
    for (i = 0; i <= k; i++)
        C[i] = 0;
    for (j = 1; j <= n; j++)
        C[A[j]] = C[A[j]] + 1;
    for (i = 1; i <= k; i++)
        C[i] = C[i] + C[i-1];
    for (j = n; j >= 1; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
    printf("The Sorted array is : ");
    for (i = 1; i <= n; i++)
        printf("%d ", B[i]);
}
/*  End of counting_sort()  */
 
/*  The main() begins  */
int main()
{
    int n, k = 0, A[15], i;
    printf("Enter the number of input : ");
    scanf("%d", &n);
    printf("\nEnter the elements to be sorted :\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > k) {
            k = A[i];
        }
    }
    counting_sort(A, k, n);
    printf("\n");
    return 0;
}











/*void CountingSort(int a[],int k,int n)
{
	int count[50],b[50];
	int i;
	for(i=1;i<=n;i++)
	{
		++count[a[i]];
	}
	for(i=1;i<=k;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		
		b[--count[a[i]]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	
}
int main()
{
	int i,k=0,n;
	int a[50];
	printf("enter the size of the array");
	scanf("%d",&n);
	
	flushall();
	printf("enter the array");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(k<a[i])
		{
			k=a[i];
		}
	}
	CountingSort(a,k,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}*/