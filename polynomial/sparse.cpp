#include<iostream>
using namespace std;

class sparse
{
	int sp1[20][3];
public:
	void read();
	sparse add(sparse B);
	sparse mul(sparse B);
	sparse trans();
	void Display();
};
void sparse:: read()
{
	int rows,cols,val;
	cout<<"enter the rows"<<endl;
	cin>>rows;
	cout<<"enter the col"<<endl;
	cin>>cols;

	sp1[0][0]=rows;
	sp1[0][1]=cols;
	cout << "enter the number of non-zero element"<<endl;
	cin>>val;
	sp1[0][2]=val;
	for( int i=1;i<=val;i++)
	{
		cout<<"enter the next triple (rows ,columns ,value):"<<endl;
		cin>>sp1[i][0];
		cin>>sp1[i][1];
		cin>>sp1[i][2];
	}
}
void sparse::Display()
{
	int n;
	n=sp1[0][2];
	cout<<"\nRow\tcolumn\tvalue\n"<<endl;
	for(int i=0;i<=n;i++)
	{
		cout<<sp1[i][0]<<"\t";
		cout<<sp1[i][1]<<"\t";
		cout<<sp1[i][2]<<"\n";
	}
}

sparse sparse::add(sparse obj2)
{
	sparse C;
	int i=0,j=0,k=0;
	int r1=sp1[0][0],r2=obj2.sp1[0][0],c1=sp1[0][1],c2=obj2.sp1[0][1],q=sp1[0][3],r=obj2.sp1[0][3];

	if(sp1[0][0]!=obj2.sp1[0][0]|| sp1[0][1]!=obj2.sp1[0][1])
	{
		cout << "Matrices can't be added"; 
	}
	C.sp1[0][0]=sp1[0][0];
	C.sp1[0][1]=sp1[0][1];
	while((i<=q)&&(j<=r))
	{
		if(sp1[i][0]==obj2.sp1[j][0])
		{
			if(sp1[i][1]==obj2.sp1[j][1])
			{
				C.sp1[k][0]=sp1[i][0];
				C.sp1[k][1]=sp1[i][1];
				C.sp1[k][2]=sp1[i][2]+obj2.sp1[j][2];
				k++,i++,j++;
			}
			else if(sp1[i][1]<obj2.sp1[j][1])
			{
				C.sp1[k][0]=sp1[i][0];
				C.sp1[k][1]=sp1[i][1];
				C.sp1[k][2]=sp1[i][2];
				k++,i++;
			}
			else 
			{
				C.sp1[k][0]=obj2.sp1[j][0];
				C.sp1[k][1]=obj2.sp1[j][1];
				C.sp1[k][2]=obj2.sp1[j][2];
				k++,j++;
			}
		}
		else if(sp1[i][0]<obj2.sp1[j][0])
			{
				C.sp1[k][0]=sp1[i][0];
				C.sp1[k][1]=sp1[i][1];
				C.sp1[k][2]=sp1[i][2];
				k++,i++;
			}
		else 
			{
				C.sp1[k][0]=obj2.sp1[j][0];
				C.sp1[k][1]=obj2.sp1[j][1];
				C.sp1[k][2]=obj2.sp1[j][2];
				k++,j++;
			}//end else
	}//end while
	while(i<=q)
	{
		C.sp1[k][0]=sp1[i][0];
		C.sp1[k][1]=sp1[i][1];
		C.sp1[k][2]=sp1[i][2];
		k++,i++;
	}
	while(j<=r)
	{
		C.sp1[k][0]=obj2.sp1[j][0];
		C.sp1[k][1]=obj2.sp1[j][1];
		C.sp1[k][2]=obj2.sp1[j][2];
		k++,j++;
	}
	C.sp1[0][2]=k;
	return C;
}
int main()
{
	sparse obj;
	cout<<"read 1st matrix"<<endl;
	obj.read();
	obj.Display();
	sparse obj2;
	cout<<"read 2nd matrix"<<endl;
	obj2.read();
	sparse c=obj.add(obj2);
	cout<<"display addition of 2 matrix"<<endl;
	c.Display();
	return 0;
}