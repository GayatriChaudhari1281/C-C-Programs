#include<iostream>
using namespace std;
void addNumbers(int num1, int num2)
{
	int sum;
	sum=num1+num2;
	cout << sum << endl;
}

 
void divideNumbers(int num1, int num2)
{
	int divide;
	divide=num1/num2;
	cout << divide << endl;
}


void subtractNumbers(int num1, int num2)
{
	int subtract;
    subtract=num1-num2;
	cout << subtract << endl;
}


void multiplyNumbers(int num1, int num2)
{
	int multiply;
    multiply=num1 * num2;
	cout << multiply << endl;
}
int main()
{
	int a=0;
	int num1;
	int num2;
	cout << "enter the number 1" << endl;
	cin >> num1;
	cout << "enter the number 2" << endl;
	cin >> num2;
	addNumbers(num1, num2);
	divideNumbers(num1, num2);
	subtractNumbers(num1, num2);
	multiplyNumbers(num1, num2);
	
}
