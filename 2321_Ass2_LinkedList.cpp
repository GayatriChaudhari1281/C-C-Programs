/******************************************************************************
 
 Name-Gayatri Suresh Chaudhari
 Roll No: 2321      CNum: C22019221323
 
 Assignment No: 2 [Linked List]
 
Problem Statement:
Department of Computer Engineering has 'CSI student branch'. Students
of second, third and final year can subscribe to membership. Design a
system to maintain CSI student branch membership information. Choose
appropriate data structure. Write a program using C++ for following
operations:
1. Add new members.
2. Compute total number of members at branch.
3. Display member information.
4. Remove member details.

*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;
class node //create a class node
{
    int Roll,Year;
    char Name[30];
    node *link;
    public:
    //parameterized constructor
    node(char name[],int rn,int year) //initialize all variables
    {
         Roll=rn;
         Year=year;
         strcpy(Name,name);
         link=NULL; //initialize link to Null
    }
    friend class list;
};

class list //create class list
{
    node *head;
    public:
    void create();
    void insert();//function declarartion
    void Delete(int);
    void display();
    int countMember();
    list()
    {
        head=NULL;
    }
};

void list::create() //create Linked List
{
    int ans;   
    node *temp=NULL;//temporary variable to store data
    do{
        int Roll,Year;
        char Name[30];
        cout<<"Enter the Roll Number"<<endl;//taking input from user
        cin>>Roll;
        cout<<"Enter the Year of studying"<<endl;
        cin>>Year;
        cout<<"Enter the Name of the student"<<endl;
        cin>>Name;
        temp=new node(Name,Roll,Year);
        if(head==NULL)//if the linked list is empty
        {
            head=temp;
        }
        else
        {
            node *ptr=head;//ptr for traversing the linkedlist
            while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=temp;
        }
        cout<<"Would you like to continue?if yes,enter 1";
        cin>>ans;
    }while(ans==1);
}
void list::display() //display the data
{
    node *ptr=head;
    cout<<"Roll\t"<<"Year\t"<<"Name\n";
    while(ptr!=NULL) //while loop for traversing each node
    {
        cout<<ptr->Roll<<"\t";
        cout<<ptr->Year<<"\t";
        cout<<ptr->Name;
        ptr=ptr->link;
        cout<<endl;
    }
}
//Time Complexity: O(n)
void list::insert() //insert new node at particular position
{
    int Roll,Year;
    char Name[30];
    node *ptr=head;//for traversal purpose
    node *temp=NULL;//To allocate the memory for the new node
    int pos;
    cout<<"Enter the position where linked list to be added";
    cin>>pos;
    cout<<"Enter the Roll Number"<<endl;
    cin>>Roll;
    cout<<"Enter the Year of studying"<<endl;
    cin>>Year;
    cout<<"Enter the Name of the student"<<endl;
    cin>>Name;
    temp=new node(Name,Roll,Year);//memory allocation
    if(head==NULL)//if linked list is empty
    {
        return;
    }
    if(pos==1)//position is given 1
    {
        head=temp;
    }
    else if((pos<=0) || (pos>countMember()+1))//if the position is negative or grater than the size of linked list
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    else
    {
        while(pos-1>1)//traversing until position-1 
        {
            ptr=ptr->link;
            pos--;
        }
        temp->link=ptr->link;
        ptr->link=temp;
    }
}
//Time Complexity: O(n)
int list::countMember()
{
    int counter=0;
    node *ptr=head;//for traversing
    while(ptr!=NULL)
    {
        counter++;
        ptr=ptr->link;
    }
    return counter;
}
//Time Complexity: O(n)
void list::Delete(int pos) //delete the node of given Roll no
{
    node *ptr,*prev;
    if(head==NULL)//if LL is empty
    {
        cout<<"List is Empty\n";
        return;
    }
    else if(pos<=0 || pos>countMember())//if position given is negative or greater than LL size
    {
        cout<<"Invalid Input..!!";
        return;
    }
    else if(pos==1)//first position given
    {
        node *temp=head;
        head=head->link;
        delete temp;
    }
    else if(pos==countMember())//position given is last node
    {
        node *temp=head;
        if(head->link==NULL)
        {
            delete head;
            head=NULL;
        }
        else
        {
            node *temp=head;
            while(temp->link->link!=NULL)
            {
                temp=temp->link;
            }
            delete temp->link;
            temp->link=NULL;
        }
        
    }
    else
    {
        node *temp1=head;
        node *temp2=NULL;
        while(pos-1>1)
        {
            temp1=temp1->link;
            pos--;
        }
        temp2=temp1->link;
        temp1->link=temp2->link;
        delete temp2;
    }
    
}
int main()
{
    list l; //object of list class
    int ch,icnt,Roll;
    char ans;
    do{ //Make Menu Driven Program
        cout<<"\n1.Accept\n2.Display\n3.Insert\n4.Delete\n5:CountMember\n";
        cout<<"Enter the choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:l.create();
             //Call create function
            break;
            
            case 2:l.display();
             //Call display function
            break;
            
            case 3: l.insert();
             //Call insert function
            break;
            
            case 4:cout<<"enter The position of Node To be Deleted"<<endl;
            cin>>Roll;
            l.Delete(Roll);
             //Call delete function
            break;
            
            case 5: icnt=l.countMember();
            cout<<"Total Number of Members are"<<icnt<<endl;
             //Call count function
            break;
            
            default:cout<<"Enter Valid Option!!";
        }
        cout<<"Would you like to continue?if yes,enter Y"<<endl;
        cin>>ans;
    }while(ans=='Y');
}


/**************************************************************************************
 Output:
 
1.Accept
2.Display
3.Insert
4.Delete
5:CountMember
Enter the choice:
1
Enter the Roll Number
2321
Enter the Year of studying
2
Enter the Name of the student
gayatri
Would you like to continue?if yes,enter 11
Enter the Roll Number
2301
Enter the Year of studying
2
Enter the Name of the student
Shreaya
Would you like to continue?if yes,enter 11
Enter the Roll Number
2303
Enter the Year of studying
2
Enter the Name of the student
Akhila
Would you like to continue?if yes,enter 12
Would you like to continue?if yes,enter Y
Y

1.Accept
2.Display
3.Insert
4.Delete
5:CountMember
Enter the choice:
2
Roll	Year	Name
2321	2	gayatri
2301	2	Shreaya
2303	2	Akhila
Would you like to continue?if yes,enter Y
Y

1.Accept
2.Display
3.Insert
4.Delete
5:CountMember
Enter the choice:
3
Enter the position where linked list to be added2
Enter the Roll Number
2302
Enter the Year of studying
2
Enter the Name of the student
Ankita
Would you like to continue?if yes,enter Y
Y

1.Accept
2.Display
3.Insert
4.Delete
5:CountMember
Enter the choice:
2
Roll	Year	Name
2321	2	gayatri
2302	2	Ankita
2301	2	Shreaya
2303	2	Akhila
Would you like to continue?if yes,enter Y
Y

1.Accept
2.Display
3.Insert
4.Delete
5:CountMember
Enter the choice:
4
enter The position of Node To be Deleted
-1
Invalid Input..!!Would you like to continue?if yes,enter Y
Y

1.Accept
2.Display
3.Insert
4.Delete
5:CountMember
Enter the choice:
4
enter The position of Node To be Deleted
3
Would you like to continue?if yes,enter Y
Y

1.Accept
2.Display
3.Insert
4.Delete
5:CountMember
Enter the choice:
2
Roll	Year	Name
2321	2	gayatri
2302	2	Ankita
2303	2	Akhila
Would you like to continue?if yes,enter Y
Y

1.Accept
2.Display
3.Insert
4.Delete
5:CountMember
Enter the choice:
5
Total Number of Members are3
Would you like to continue?if yes,enter Y
N


*******************************************************************************/