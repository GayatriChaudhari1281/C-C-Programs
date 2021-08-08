//Linear Queue using array
#include <iostream>
using namespace std;
int const SIZE=5;
class Q
{
    int front,rear;
    int a[SIZE];
    public :
    Q()
    {
        front=-1;
        rear=-1;
    }
    bool isempty();
    void enqueue(int);
    void dequeue();
    void showfront();
    void displayQueue();
};

bool Q :: isempty()
{
    if(front==-1 && rear==-1)
    return true;
    else
    return false;
}

void Q :: enqueue(int val)
{
    if(rear==SIZE-1)
    cout<<"\n\tQueue is full";
    else
    {
        if(front==-1)
        front=0;
        rear++;
        a[rear]=val;
    }
}


void Q :: dequeue()
{
    if(isempty())
    cout<<"\n\tQueue is empty cannot dequeue";
    else
    {
        if(front==rear)
        front=rear=-1;
        else
        front++;
    }
}

void Q :: showfront()
{
    if(isempty())
    cout<<"\n\tQueue is empty!";
    else
    cout<<"\n\tElement at front is :"<<a[front];
}

void Q :: displayQueue()
{
    if(isempty())
    cout<<"\n\tQueue is empty!";
    else
    for(int i=front;i<=rear;i++)
    {
        cout<<"\t"<<a[i];
    }
}

int main()
{
    Q q;
    int ch,val;
    do
    {
    cout<<"\n\t1.Enter 1 for enqueue";
    cout<<"\n\t2.Enter 2 for dequeue";
    cout<<"\n\t3.Enter 3 for showfront";
    cout<<"\n\t4.Enter 4 for displaying queue";
    cout<<"\n\t5.Enter 5 for checking whether queue is empty or not";
    cout<<"\n\t6.Enter 6 for your choice!";
    cout<<"\n\t7.Enter 7 for exit";
    cout<<"\n\tEnter any number now";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"\n\tEnter the value to be inserted :";
        cin>>val;
        q.enqueue(val);
        break;
        
        case 2:
        q.dequeue();
        break;
        
        case 3:
        q.showfront();
        break;
        
        case 4:
        q.displayQueue();
        break;
        
        case 5:
        q.isempty();
        break;
        
        case 6:
        cout<<"\n\tInvalid Choice!";
        break;
    }
   }while(ch!=7);
  return 0;
}
