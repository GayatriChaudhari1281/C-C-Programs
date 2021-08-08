/*#include<iostream>
#define capacity 6
using namespace std;

int queue[capacity];
int front = -1, rear = -1;

class Queue
{
public:
	int checkFull();
	int checkEmpty();
	void enqueue(int value);
	int dequeue();
	void print();
};
// Here we check if the Circular queue is full or not
int Queue:: checkFull(){
	if((rear+1)%capacity==front){
        return 1;
    }
    return 0;
}

// Here we check if the Circular queue is empty or not
int Queue:: checkEmpty(){
    if (front == -1) 
    {
        return 1;
    }
  return 0;
}

// Addtion in the Circular Queue
void Queue:: enqueue(int value){
    if (checkFull())
      cout<<"Overflow condition\n"<<endl;
    
    else
    {
        if (front == -1) 
            front = 0;
        
        rear = (rear + 1) % capacity;
        queue[rear] = value;
        cout<<value<<"Enqueued in Queue"<<endl;
  }
}

// Removal from the Circular Queue
int Queue:: dequeue() {
    int variable;
    if (checkEmpty()) {
        cout<<"Underflow condition"<<endl;
        return -1;
    } 
    else
    {
        variable = queue[front];
        if (front == rear) {
            front = rear = -1;
    } 
    else {
      front = (front + 1) % capacity;
    }
    cout<<variable<<"dequeued from circular queue"<<endl;
    return 1;
  }
}

// Display the queue
void Queue:: print(){
    int i;
    if (checkEmpty())
       cout<<"Nothing to dequeue"<<endl;
    else
    {
        cout<<"The queue looks like:"<<endl;
        for (i = front; i != rear; i = (i + 1) % capacity)
        {
            cout<<queue[i]<<endl;
        }
    cout<<queue[i]<<endl;

  }
}

int main() {
  // Not possible as the Circular queue is empty
	Queue obj;
  obj.dequeue();

  obj.enqueue(15);
  obj.enqueue(20);
  obj.enqueue(25);
  obj.enqueue(30);
  obj.enqueue(35);

  obj.print();
  obj.dequeue();
  obj.dequeue();

  obj.print();

  obj.enqueue(40);
  obj.enqueue(45);
  obj.enqueue(50);
  obj.enqueue(55);//Overflow condition
  obj.print();

  return 0;
}*/