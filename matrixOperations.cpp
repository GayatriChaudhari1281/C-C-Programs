#include<stdio.h>
void enterdata(int c1, int c2, int r1, int r2);
void display(int arr[100][100], int brr[100][100], int c1, int c2, int r1, int r2);
void add(int arr[100][100], int brr[100][100], int c1, int c2, int r1, int r2);
void subtract(int arr[100][100], int brr[100][100], int c1, int c2, int r1, int r2);
void multiply(int arr[100][100], int brr[100][100], int c1, int c2, int r1, int r2);
int main()
{
	int c1, c2, r1, r2;
	printf("enter the number of rows and column in first matrix\n");
	scanf("%d%d", &r1, &c1);
	printf("enter the number of rows and column in second matrix\n");
	scanf("%d%d", &r2, &c2);
	if ((c1 != c2) && (r1 != r2)&&(c1!=r2))
	{
		printf("the number of rows and columns should be same\n");
		printf("you cannot perform addition ,subtraction and multiplication \n");
		return -1;
	}
	else 
	{
		if ((r1 != c2))
		{
			printf("you cannot perform addition and subtraction\n");
			printf("you can perform multiplication only \n");
		}
	}
	enterdata( c1, c2, r1, r2);
	return 0;
}
void enterdata( int c1, int c2, int r1, int r2)
{
	int i, j,ch;
	int arr[100][100], brr[100][100];
	printf("enter the elements of matrix 1\n");
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c1;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("enter the elements of matrix 2\n");
	for (i = 0;i < r2;i++)
	{
		for (j = 0;j < c2;j++)
		{
			scanf("%d", &brr[i][j]);
		}
	}
	printf("enter 1:display\n2:addition\n3:subtraction\n4:multiplicaton\n5:exit\n");
	do
	{
		printf("enter your choice\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:display(arr, brr, c1, c2, r1, r2);
			break;
		case 2:add(arr, brr, c1, c2, r1, r2);
			break;
		case 3:subtract(arr, brr, c1, c2, r1, r2);
			break;
		case 4:multiply(arr, brr, c1, c2, r1, r2);
			break;
		case 5:printf("exit\n");
		}
	} while (ch < 5);
}
void display(int arr[100][100], int brr[100][100], int c1, int c2, int r1, int r2)
{
	int i, j;
	printf("the first matrix is:\n");
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c1;j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("the second matrix is:\n");
	for (i = 0;i < r2;i++)
	{
		for (j = 0;j < c2;j++)
		{
			printf("%d\t", brr[i][j]);
		}
		printf("\n");
	}

}

void add(int arr[100][100], int brr[100][100], int c1, int c2, int r1, int r2)
{
	int sum[100][100];
	int i, j;
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c1;j++)
		{
			sum[i][j] = arr[i][j] + brr[i][j];
		}
		printf("\n");
	}
	printf("the addition of two matrix is:\n");
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c1;j++)
		{
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}

}
void subtract(int arr[100][100], int brr[100][100], int c1, int c2, int r1, int r2)
{
	int sub[100][100];
	int i, j;
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c1;j++)
		{
			sub[i][j] = arr[i][j] - brr[i][j];
		}
		printf("\n");
	}
	printf("the subtraction of two matrix is:\n");
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c1;j++)
		{
			printf("%d\t", sub[i][j]);
		}
		printf("\n");
	}

}
void multiply(int arr[100][100], int brr[100][100], int c1, int c2, int r1, int r2)
{
	int multi[100][100];
	int i, j, k;
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c2;j++)
		{
			multi[i][j] = 0;
		}
	}
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c2;j++)
		{
			for (k = 0;k < c1;k++)
			{
				multi[i][j] += arr[i][k] * brr[k][j];
			}
		}
	}
	printf("multiplication of two matrix is:\n");
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c2;j++)
		{
			printf("%d\t", multi[i][j]);
			if (j == c2 - 1)
			{
				printf("\n");
			}
		}
	}

}