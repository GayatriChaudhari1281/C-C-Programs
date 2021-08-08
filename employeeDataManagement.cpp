#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[30];
	char department[30];
	int salary;
};
void accept(struct employee[],int n );
void display(struct employee[], int n);
void searchname(struct employee[], int n);
void searchid(struct employee[], int n, int num);
void update(struct employee[], int n);
void accept(struct employee report[100], int n)
{
	
	int i;
	for (i = 0;i < n;i++)
	{
		
		printf("employee number:%d\n", i + 1);
		printf("enter the employee id\n");
		scanf("%d", &report[i].id);
		printf("enter the name of the employee\n");
		scanf("%s", report[i].name);
		printf("enter the department of employee\n");
		scanf("%s", report[i].department);
		printf("enter the salary of the employee\n");
		scanf("%d", &report[i].salary);
		printf("------------------------------------------------------------------------\n");
	}
}
void display(struct employee report[100], int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		printf("#employee number:%d\n", i + 1);
		printf("employee id :%d\n", report[i].id);
		printf("employee name :%s\n", report[i].name);
		printf("employee department: %s\n", report[i].department);
		printf("employee salary:%d\n", report[i].salary);
		printf("\n");
	}
}
void searchname(struct employee report[100], int n)
{
	int i,flag=0;
	char ename[30] = {'\0'};
	printf("enter the name of employee whose record have to find\n");
	scanf("%s", ename);
	for (i = 0;i < n;i++)
	{
		if(strcmp(report[i].name,ename)==0)
		{
			flag = 1;
			printf("employee id:%d\nemployee name:%s\nemployee department:%s\nemployee salary:%d\n", report[i].id, report[i].name, report[i].department, report[i].salary);
		}
	}
	if (flag == 0)
	{
		printf("there is no data found\n");
	}
}
void searchid(struct employee report[100], int n, int num)
{
	int i,flag=0;
	for (i = 0;i < n;i++)
	{
		if (report[i].id == num)
		{
			flag = 1;
			printf("employee id:%d\nemployee name:%s\nemployee department:%s\nemployee salary:%d\n", report[i].id, report[i].name, report[i].department, report[i].salary);
		}
	}
	if (flag == 0)
	{
		printf("there is no data found\n");
	}
}
void update(struct employee report[100], int n)
{
	int i,num,x,y,b,flag=0;
	char z[30] = { '\0' }, a[30] = { '\0' };
	printf("enter the employee id to make changes in data\n");
	scanf("%d", &num);
	for (i = 0;i < n;i++)
	{
		if (report[i].id == num)
		{
			flag = 1;
			do
			{
				printf("1:id\n2:name\n3:department\n4:salary\n5:no correction\n");
				printf("enter the choice what you have to change\n");
				scanf("%d", &x);
				switch (x)
				{
				case 1:printf("enter the updated id\n");
					scanf("%d", &y);
					report[i].id = y;
					break;
				case 2:printf("enter the updated name\n");
					scanf("%s", z);
					strcpy(report[i].name, z);
					break;
				case 3:printf("enter the updated department\n");
					scanf("%s", a);
					strcpy(report[i].department, a);
					break;
				case 4:printf("enter the updated salary\n");
					scanf("%d", &b);
					report[i].salary= b;
					break;
				case 5:printf("exit\n");
					break;
				}
			} while (x <5);
		}
    }
	if (flag == 0)
	{
		printf("there is no data found\n");
	}
	
}
int main()
{
	struct employee report[100];
	int n,ch,num;
	printf("number of records do you want to enter\n");
	scanf("%d", &n);
	printf("------------------------------------------------------------------------\n");
	accept(report, n);
	do
	{
		printf("menu is:\n");
		printf("1:display the employee record\n2:search the employee by name \n3:seach the employee by id\n4:update the data of employee\n5:exit\n");
		printf("------------------------------------------------------------------------\n");
		printf("enter your choice\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:display(report, n);
			break;
		case 2:searchname(report, n);
			break;
		case 3:printf("enter the employee id whose report have to search\n");
			scanf("%d", &num);
			searchid(report, n, num);
			break;
		case 4:update(report, n);
			break;
		case 5:printf("exit\n");
			break;
		}

	} while (ch <6);
	return 0;
}