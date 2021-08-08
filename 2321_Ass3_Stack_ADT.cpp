
/************************************************
Roll Number-->2321
Name=> Gayatri Suresh Chaudhari
CNum->C22019221323
ASSIGNMENT-3
PROBLEM STATEMENT:
Implement Stack as ADT using linked list or array. 
Use the same ADT to evaluate a given postfix  expression.
************************************************/
#include <iostream>
#include<cstring>
using namespace std;
class node//creating the node class
{
    int data;
    node *link;
    public:
    //parameterized constructor
    node(int d)//initialization of data
    {
        data=d;
        link=NULL;
    }
    friend class stack;
};
class stack//creating stack class for calling the functions
{
private:
	node *top;
public:
    stack()//default constructor
    {
        top=NULL;
    }
	int IsStackEmpty();//function declaration
	void push(int);
	int pop();
	void display_top();
	void display();
	void postfix(string);
};
//Time Complexity =O(1)
int stack::IsStackEmpty()//checking stack empty or not
{
    if(top==NULL)//if stack is empty
        return 1;
    else
        return 0;
}
//Time Complexity =O(1)
void stack::push(int data)//pushing the elements in stack
{
    node *ptr;
    node *newnode=new node(data);//creating new node to push
    if(top==NULL)//if stack is empty
    {
        top=newnode;
    }
   else//otherwise
    {
        newnode->link=top;
        top=newnode;
    }
}
//Time Complexity =O(1)
int stack::pop()//removing the elements from stack
{
    node *ptr;//ptr for traversing
    int data;
    if(IsStackEmpty()==1)//if stack is empty
    {
        cout<<"Stack is empty\n";
        return 0;
    }
    else
    {
        ptr=top;
        data=top->data;
        top=top->link;
        delete ptr;
    }
    return data;//returning the popped data
}
//Time Complexity =O(n)
void stack::display()//to display the elements present in stack
{
    node *ptr=top;//for traversing
    cout<<"Elements in stack\n";
    while(ptr!=NULL)//traversing until ptr becomes null
    {
        cout<<ptr->data<<endl;
        ptr=ptr->link;
    }
}
//Time Complexity =O(1)
void stack::display_top()//displaying the top element of stack
{
    cout<<"element at the top of the stack is: "<<top->data<<endl;
}
void stack::postfix(string str)//calculating the result of postfix expression
{
    char ch;
    int op1,op2;
    int result;
    for(int i=0;i<str.size();i++)//traversing until the length of string
    {
        ch=str[i];
        if(ch >= '0' && ch <= '9')//if character is operand
        {
            int no=(int)ch-48;//converting character into integer
            push(no);//pushing into stack
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/')//if character is operator
        {
            if(!IsStackEmpty())//if stack is not empty
            {
                op2=pop();//pop the 2 elements from stack
                op1=pop();
            }
            switch(ch)//switch case for particular operation performing
            {
                case '+':
                    push(op1+op2);
                    break;
                case '-':
                    push(op1-op2);
                    break;
                case '*':
                    push(op1*op2);
                    break;
                case '/':
                    push(op1/op2);
                    break;
            }
        }
    }
    result=pop();
    cout<<"result is:"<< result <<endl;//result
}
int main()
{
    stack s;//object of stack class
    string str;//for postfix expression input
    int choice,flag;
    cout<<"***MENU DRIVEN STACK PROGRAM\n";//options for user
    cout<<"Enter\n";
    cout<<"1:To push the data into the stack\n";
    cout<<"2:To remove the data from the stack\n";
    cout<<"3:To display the top element from stack\n";
    cout<<"4:To display all the elements present in the stack\n";
    cout<<"5:To see whether the stack is empty or not\n";
    cout<<"6:To calculate the result of postfix expression\n";
    do{
        cout<<"Enter the choice from above list\n";
        cin>>choice;
        switch(choice)
        {
            case 1:int data;//calling push function
                cout<<"enter the data which have to push\n";
                cin>>data;
                s.push(data);
            break;
            case 2:cout<<"Popped elements is: "<<s.pop()<<endl;//calling pop function
            break;
            case 3:s.display_top();//calling display_top function
            break;
            case 4:s.display();//calling display function
            break;
            case 5:flag=s.IsStackEmpty();//calling IsStackEmpty function
            if(flag==1)
                cout<<"Stack is empty\n";
            else
                cout<<"Stack is not Empty\n";
            break;
            case 6:cout<<"Enter the postfix expression\n";//calling postfix function
            cin>>str;
            s.postfix(str);
            break;
            case 7:cout<<"end of program\n";//end of program
            break;
            
            default:cout<<"Invalid input..!!Enter again\n";
            break;
        }
        
    }while(choice!=7);
    
    return 0;
}

/****************************************************************
 ***MENU DRIVEN STACK PROGRAM
Enter
1:To push the data into the stack
2:To remove the data from the stack
3:To display the top element from stack
4:To display all the elements present in the stack
5:To see whether the stack is empty or not
6:To calculate the result of postfix expression
Enter the choice from above list
1
enter the data which have to push
10
Enter the choice from above list
1
enter the data which have to push
20
Enter the choice from above list
1
enter the data which have to push
30
Enter the choice from above list
1
enter the data which have to push
40
Enter the choice from above list
3
element at the top of the stack is: 40
Enter the choice from above list
2
Popped elements is: 40
Enter the choice from above list
3
element at the top of the stack is: 30
Enter the choice from above list
4
Elements in stack
30
20
10
Enter the choice from above list
5
Stack is not Empty
Enter the choice from above list
6
Enter the postfix expression
4572+-*
result is:-16
Enter the choice from above list
7
end of program


************************************************************************/
