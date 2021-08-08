/*#include<iostream>
#include<math.h>
using namespace std;

class  polynomial
{
public:
	polynomial();
	coefficient coef(exponent e);
	exponent leadexp();
	polynomial add(polynomial poly); //return sum of *this and poly
	polynomial multiply(polynomial poly);// Return product of *this and poly
	float eval(float f);  //Evaluate the polynomial *this at f & return result
};
 class term
 {
 public:
	 int coeff,deg;
 };
 class poly
 {
	 term T[10];
	 int n;
 public:
	 poly sum(poly c1,poly c2)
	 {
		 poly d;
		 int i=0,j=0,k=0;
		 while(c1.n>0&&c2.n>0)
		 {
			 if(c1.T[i].deg==c2.T[j].deg)
			 {
				 d.T[k].coeff=c1.T[i].coeff+c2.T[j].coeff;
				 d.T[k].deg=c1.T[i].deg;
				 d.n++;
				 c1.n--;
				 c2.n--;
				 i++,j++,k++;
			 }
			 else if(c1.T[i].deg<c2.T[j].deg)
			 {
				 d.T[k].coeff=c1.T[i].coeff;
				 d.T[k].deg=c1.T[i].deg;
				 d.n++;c1.n--;
				 i++;
				 k++;
			 }
			 else
			 {
				 d.T[k].coeff=c2.T[j].coeff;
				 d.T[k].deg=c2.T[j].deg;
				 d.n++,c2.n--;
				 j++,k++;
			 }
		 }
		 while(c1.n>0)
		 {
			 d.T[k].coeff=c1.T[i].coeff;
			 d.T[k].deg=c1.T[i].deg;
			 d.n++,i++,k++;
			 c1.n--;
		 }
		  while(c2.n>0)
		 {
			 d.T[k].coeff=c2.T[j].coeff;
			 d.T[k].deg=c2.T[j].deg;
			 d.n++,j++,k++;
			 c2.n--;
		 }

	 }
	 void eval()
	 {
		 int x;
		 cout<<"enter value for x";
		 cin>>x;
		 int i=0,ans=0;
		 for(i=0;i<n;i++)
		 {
			 //ans=ans+T[i].coeff*(pow(x,T[i].deg));
			 cout << ans;
		 }
	 }
	 void accept()
	 {
		 printf("enter the number of terms of polynomial");
		 cin>>n;
		 for(int i=0;i<n;i++)
		 {
			 cout << "enter coeff";
			 cin >>T[i].coeff;
			 cout << "enter degree";
			 cin >>T[i].deg;
		 }
		 return;
		}
	 void display()
	 {
		 for (int i=0;i<n;i++)
		 {
			 cout << "+";
			 if(T[i].coeff<0.0)
				 cout << '(' << T[i].coeff << ')';
			 else
				 cout<<T[i].coeff;
			 cout<<"x^"<<T[i].deg;
		 }
	 }
	 poly mult(poly ,poly);
	
 };


int main()
{
	poly obj;
	obj.accept();
	obj.display();
	obj.eval();
	return 0;
}*/