#include<stdio.h>
int main()
{
	int no=21,x=5,y;
	int *p=&no;
	printf("address and pointer operator\n");
	printf("%d\n",no);
	printf("%d\n",&no);
	printf("%d\n",p);
	printf("%d\n",&p);
	printf("%d\n",*p);
	printf("sizeof operator\n");
	printf("%d\n",sizeof(p));
	printf("increment and decrement operator\n");
	y=++x;//preincrement
	printf("++x:%d\n",x);
	printf("%d\n",y);
	y=x++;//postincrement
	printf("x++:%d\n",x);
	printf("%d\n",y);
	y=--x;//predecrement
	printf("--x:%d\n",x);
	printf("%d\n",y);
	y=x--;//postincrement
	printf("x--:%d\n",x);
	printf("%d\n",--y);
	printf("++x%d\ty++%d\tx--%d\t--y%d\n",++x,y++,x--,--y);
	int b=5;
	printf("%d\t%d\t%d\t%d\n",b++,b--,++b,--b);
	printf("shift operator\n");
	printf("%d\n",no<<1);
	printf("%d\n",no>>2);


	return 0;
}