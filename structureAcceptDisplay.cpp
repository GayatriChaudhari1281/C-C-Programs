#include<stdio.h>
#include<string.h>
#include<conio.h>
struct data
{
    int roll_no;
    char name[20];
   char course[20];
	float persentage;
};
int main()
{
	int i;
	struct data obj[24];
	printf("enter the imformation of student\n");
	for (i = 0;i <= 5;++i)
	{
		printf("roll no of student,name,course,percentage\n");
		scanf("%d \n", &obj[i].roll_no);
		scanf("%s\n", &obj[i].name);
		scanf(" \n%s", obj[i].course);
		scanf("\n%f", &obj[i].persentage);
	}
	printf("\ndisplaying the data");
	for (i = 0;i <= 5;++i)
	{
		printf("\nroll no is %d", obj[i].roll_no);
		printf("\nname of the student %s", obj[i].name);
		printf("\ncourse of the student %s", obj[i].course);
		printf("\npersentage of student %f", obj[i].persentage);
	}
	return 0;
}