/******************************************************************************
Roll_no-2321
Name-Gayatri Suresh Chaudhari
CNumber-C22019221323

Assignment no: 04

Problem Statement:
Implement Queue as ADT using linked list or array. Use Queue ADT to simulate
'wait list' operations of railway reservation system.
*******************************************************************************/
#include<iostream>
using namespace std;
class ticket
{
    //data members of the class ticket
    public:
    string name;
    long int pnr;
    char gender;
    int age;
    long int contact_no;
    string booking_status;
    friend class queue;//class queue can access data members of class ticket
    public:
    ticket()//default constructor to initialize the value
    {
        name="";
        age=0;
        pnr=0;
        gender='\0';
        contact_no=0;
        booking_status="CONFIRMED";
    }
    void accept_tckDetails();//function declaration
    void display_tckDetails();
    static int search_pnr(ticket t[],int,long int);
    friend class queue;
};
void ticket::accept_tckDetails()//accept function for calling
{
    pnr=rand()%100000+1110000000;//pnr number is of 10 digits
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"\nenter Gender(F/M)= ";
    cin>>gender;
    cout<<"\nEnter age=";
    cin>>age;
    cout<<"\nEnter contact number= ";
    cin>>contact_no;
}
void ticket::display_tckDetails()//display function
{
    cout<<"\nPNR NumberIs: "<<pnr;
    cout<<"\nName : "<<name;
    cout<<"\ngender: "<<gender;
    cout<<"\nAge= "<<age;
    cout<<"\nContact Number : "<<contact_no;
    cout<<"\nBooking Status: "<<booking_status<<endl;
}
//Time complexity is O(n)
int ticket::search_pnr(ticket cnf_tickets[],int size,long int pnr_no)//Searching the given pnr number
{
    ticket t;
    int pos=-1;
    for(int i=0;i<size;i++)
    {
        if(pnr_no==cnf_tickets[i].pnr)
        {
            pos=i;
            break;
        }
    }
    return pos;
}
class queue{//queue datastructure for ticket class
    ticket data[5];
    int rear;
    int front;
    public:
    queue()//initialization
    {
        rear=-1;
        front=-1;
    }
    int isFull();//queue function declaration
    int IsEmpty();
    void Enqueue();
    ticket Dequeue();
    void showFront();
    void showRear();
};
//Time Complexity is O(1)
int queue::isFull()//checking whether queue is full 
{
    if(rear==4)
        return 1;
    else
        return 0;
}
//Time Complexity is O(1)
int queue::IsEmpty()//checking whether queue is empty
{
    if(front==-1)
        return 1;
    else
        return 0;
}
//Time Complexity is O(1)
void queue::Enqueue()//adding the tickets in queue for waiting
{
    if(rear==-1)//first ticket
    {
        rear=0;
        front=0;
        data[rear].accept_tckDetails();
        data[rear].booking_status="WAITING LIST";
        data[rear].display_tckDetails();
    }
    else
    {
        data[++rear].accept_tckDetails();
        data[rear].booking_status="WAITING LIST";
        data[rear].display_tckDetails();
    }
}
//Time Complexity is O(1)
ticket queue::Dequeue()//adding the data from waiting list to confirmed list
{
    ticket t;
    if(rear!=front)//if front is not equal to 0
    {
        t=data[front];
        t.booking_status="CONFIRMED";
        front++;
    }
    else//if dequeueing the last element
    {
        t=data[front];
        t.booking_status="CONFIRMED";
        front=-1;//initializing the variable again
        rear=-1;
    }
    cout<<"\nTicket Successfully cancelled";
    return t;
}
//Time Complexity is O(1)
void queue::showFront()//displaying the ticket  which is at front position
{
    data[front].display_tckDetails();
}
//Time Complexity is O(1)
void queue::showRear()//displaying the ticket  which is at rear position
{
    data[rear].display_tckDetails();
}
int main()
{
    ticket *cnf_tickets;
    int size=0;
    int ch=0;
    queue w1_tickets;
    cout<<"\nEnter the total confirmed tickets available= ";//total no of confirmed seat available
    cin>>size;
    cnf_tickets=new ticket[size];//creating the array of the tickets class for confirmed seats
    ticket t;
    static int s=0;
    int pnr_no=0;
    do{
        cout<<"\n1.Book tickets";//Menu driven 
        cout<<"\n2.Cancel tickets";
        cout<<"\n3.Display all confirmed tickets";
        cout<<"\n4.Displaying the waiting list front position passengers details";
        cout<<"\n5.Displaying the waiting list rear position passengers details";
        cout<<"\n6.search the pnr number in confirmed list";
        cout<<"\nn7.Exit";
        cout<<"\nEnter choice=";
        cin>>ch;
        switch(ch)
        {
            case 1:
            if(s<size)//if size of cnf_tickets is greater than the position where the passenger is adding
            {
                cnf_tickets[s].accept_tckDetails();
                cout<<"\nYour ticket is booked!";
                cnf_tickets[s].display_tckDetails();
            }
            else
            {
                if(s==size)//if size is equal to the position
                {
                    cout<<"\nAll confirmed tickets are booked";
                    w1_tickets.Enqueue();
                }
                else
                {
                    if(s<size+5)//checking for waiting list
                    {
                        w1_tickets.Enqueue();
                    }
                    else
                    {
                        cout<<"\nWaiting list is full\n";
                    }
                }
            }
            s++;
            break;
            case 2://cancelling the ticket
            int pos;
            cout<<"Enter the pnr number which have to cancel\n";
            cin>>pnr_no;
            pos=ticket::search_pnr(cnf_tickets,size,pnr_no);
            if(pos!=-1)//if pos is valid
            {
                if(!w1_tickets.IsEmpty())//check whether the waiting list is empty or not
                {
                    t=w1_tickets.Dequeue();//dequeueing the ticket 
                    cnf_tickets[pos]=t;//adding into confirmed list
                    cnf_tickets[pos].display_tckDetails();
                }
            }
            else
            {
                cout<<"\nInvalid PNR!";
            }
            break;
            case 3://displaying the confirmed list of passengers
            for(int i=0;i<size;i++)
            {
                cnf_tickets[i].display_tckDetails();
                cout<<"\n________________________________________";
            }
            case 4:w1_tickets.showFront();//displaying front position
            break;
            case 5:w1_tickets.showRear();//displaying rear position
            break;
            case 6://searching given pnr number in confirmed list
            cout<<"Enter the pnr number which have to search\n";
            cin>>pnr_no;
            pos=ticket::search_pnr(cnf_tickets,size,pnr_no);
            cnf_tickets[pos].display_tckDetails();
            break;
            case 7:cout<<"\nexit\n";
            break;
            default:
            cout<<"\nenter valid input\n";
        }
        
    }while(ch!=7);
    return 0;
}
/***************************************************
 
Enter the total confirmed tickets available= 3

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=1

Enter name: gaaytri

enter Gender(F/M)= F

Enter age=20

Enter contact number= 9384763422

Your ticket is booked!
PNR NumberIs: 1110089383
Name : gaaytri
gender: F
Age= 20
Contact Number : 9384763422
Booking Status: CONFIRMED

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=1

Enter name: Suresh

enter Gender(F/M)= M

Enter age=33

Enter contact number= 933225

Your ticket is booked!
PNR NumberIs: 1110030886
Name : Suresh
gender: M
Age= 33
Contact Number : 933225
Booking Status: CONFIRMED

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=1

Enter name: dhiraj

enter Gender(F/M)= M

Enter age=44

Enter contact number= 832353332

Your ticket is booked!
PNR NumberIs: 1110092777
Name : dhiraj
gender: M
Age= 44
Contact Number : 832353332
Booking Status: CONFIRMED

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=1

All confirmed tickets are booked
Enter name: sharda

enter Gender(F/M)= F

Enter age=22

Enter contact number= 93847234

PNR NumberIs: 1110036915
Name : sharda
gender: F
Age= 22
Contact Number : 93847234
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=1

Enter name: shreya

enter Gender(F/M)= F

Enter age=30

Enter contact number= 938357653232

PNR NumberIs: 1110047793
Name : shreya
gender: F
Age= 30
Contact Number : 938357653232
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=3

PNR NumberIs: 1110089383
Name : gaaytri
gender: F
Age= 20
Contact Number : 9384763422
Booking Status: CONFIRMED

________________________________________
PNR NumberIs: 1110030886
Name : Suresh
gender: M
Age= 33
Contact Number : 933225
Booking Status: CONFIRMED

________________________________________
PNR NumberIs: 1110092777
Name : dhiraj
gender: M
Age= 44
Contact Number : 832353332
Booking Status: CONFIRMED

________________________________________
PNR NumberIs: 1110036915
Name : sharda
gender: F
Age= 22
Contact Number : 93847234
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=4

PNR NumberIs: 1110036915
Name : sharda
gender: F
Age= 22
Contact Number : 93847234
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=5

PNR NumberIs: 1110047793
Name : shreya
gender: F
Age= 30
Contact Number : 938357653232
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=6
Enter the pnr number which have to search
1110092777

PNR NumberIs: 1110092777
Name : dhiraj
gender: M
Age= 44
Contact Number : 832353332
Booking Status: CONFIRMED

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=2
Enter the pnr number which have to cancel
1110092777

Ticket Successfully cancelled
PNR NumberIs: 1110036915
Name : sharda
gender: F
Age= 22
Contact Number : 93847234
Booking Status: CONFIRMED

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=3

PNR NumberIs: 1110089383
Name : gaaytri
gender: F
Age= 20
Contact Number : 9384763422
Booking Status: CONFIRMED

________________________________________
PNR NumberIs: 1110030886
Name : Suresh
gender: M
Age= 33
Contact Number : 933225
Booking Status: CONFIRMED

________________________________________
PNR NumberIs: 1110036915
Name : sharda
gender: F
Age= 22
Contact Number : 93847234
Booking Status: CONFIRMED

________________________________________
PNR NumberIs: 1110047793
Name : shreya
gender: F
Age= 30
Contact Number : 938357653232
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=1

Enter name: akhila

enter Gender(F/M)= F

Enter age=30

Enter contact number= 29847274

PNR NumberIs: 1110038335
Name : akhila
gender: F
Age= 30
Contact Number : 29847274
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=1

Enter name: vaishnavi

enter Gender(F/M)= F

Enter age=20

Enter contact number= 97482641

PNR NumberIs: 1110085386
Name : vaishnavi
gender: F
Age= 20
Contact Number : 97482641
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=1

Enter name: samarth

enter Gender(F/M)= M

Enter age=20

Enter contact number= 937463642

PNR NumberIs: 1110060492
Name : samarth
gender: M
Age= 20
Contact Number : 937463642
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=1

Waiting list is full

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=3

PNR NumberIs: 1110089383
Name : gaaytri
gender: F
Age= 20
Contact Number : 9384763422
Booking Status: CONFIRMED

________________________________________
PNR NumberIs: 1110030886
Name : Suresh
gender: M
Age= 33
Contact Number : 933225
Booking Status: CONFIRMED

________________________________________
PNR NumberIs: 1110036915
Name : sharda
gender: F
Age= 22
Contact Number : 93847234
Booking Status: CONFIRMED

________________________________________
PNR NumberIs: 1110047793
Name : shreya
gender: F
Age= 30
Contact Number : 938357653232
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=4

PNR NumberIs: 1110047793
Name : shreya
gender: F
Age= 30
Contact Number : 938357653232
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=5

PNR NumberIs: 1110060492
Name : samarth
gender: M
Age= 20
Contact Number : 937463642
Booking Status: WAITING LIST

1.Book tickets
2.Cancel tickets
3.Display all confirmed tickets
4.Displaying the waiting list front position passengers details
5.Displaying the waiting list rear position passengers details
6.search the pnr number in confirmed list
n7.Exit
Enter choice=7

exit


*****************************************************/