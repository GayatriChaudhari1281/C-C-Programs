#include<iostream>
using namespace std;
const int Max=5;
 class Job
 {
 public:
	 int id;
	 int priority;
	 void getdata();
	 void putdata();
 };

 void Job::getdata()
 {
	 cout<<"\nEnter job id:";
	 cin>>id;
	 cout<<"enter job priority";
	 cin>>priority;
 }

 void Job::putdata() 
 {
	 cout<<"\n\n\t"<<id;
	 cout<<"\t\t"<<priority<<endl;
 }

 class Queue
 {
	 int front,rear;
	 Job queue[Max];
 public:
	 Queue()
	 {
		 front=0;
		 rear=-1;
	 }
	 int Qfull();
	 int Qempty();
	 void enqueue();
	 void remove();
	 void display();
	 friend class Job;
 };

 int Queue::Qempty()
 {
	 if((front==(rear+1))||(front==-1))
		 return 1;
	 else
		 return 0;
 }

 int Queue::Qfull()
 {
	 if(rear==Max-1)
		 return 1;
	 else
		 return 0;
 }

 void Queue:: enqueue()
 {
	 Job j;
	 j.getdata();
	 int i=0;
	 if(Qfull()==1)
	 {
		 cout<<"queuefull\n";
	 }
	 else 
	 {
		 if(rear==-1)
		 {
			 rear++;
			 queue[rear]=j;
		 }
		 else
		 {
			i=rear;
			while(i>=front && queue[i].priority>j.priority)
			{
				queue[i+1]=queue[i];
				i--;
			}
			queue[i+1]=j;
			rear++;
		}
	 
	 }
 }

 void Queue:: remove()
 {
	 Job temp;
	 if(Qempty()==1)
		 cout<<"queue empty";
	 else
	 {
		 temp=queue[front];
		 temp.putdata();
		 front++;
	 }
 }

 void Queue::display()
 {
	 if(Qempty()==1)
	 {
		 cout<<"\nqueue empty";
	 }
	 else
	 {
		 for(int i=front;i<=rear;i++)
		 {
			 queue[i].putdata();
		 }
	 }
 }

 int main()
 {
	 Queue j;
	 j.enqueue();
	 j.enqueue();
	 j.enqueue();
	 j.enqueue();
	 j.display();
	 j.remove();

	 return 0;
 }