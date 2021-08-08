/******************************************************************************
Roll no. 2321
Name-Gayatri Suresh Chaudhari
Assignment No. 5
Problem Statement-
Write C++ program to store first year CGPA of students in array. Write
function for sorting array of floating point numbers in ascending/descending order using:
1. Bubble sort or Selection sort
2. Insertion sort
3. Merge sort or Quick sort
*******************************************************************************/

#include <iostream>
using namespace std;

class Student   //Student class to store a student details like roll_no,name,cgpa
{
    public :
    int roll_no;
    float cgpa;
    
    Student()//default constructor
    {
        roll_no=0;//to initialize the default value
        cgpa=0.0;
    }
    
    Student(int r,float c)//paameterized constructor
    {
        roll_no=r;//to initialize the values given by user
        cgpa=c;
    }
    void accept()       //Accept function to accept details of the Student
    {
        cout<<"Enter roll_no : "<<endl;
        cin>>roll_no;
        cout<<"Enter CGPA : "<<endl;
        cin>>cgpa;
    }
    
    void display()      //display function to display the details of a particular student
    {
        cout<<roll_no<<" \t "<<cgpa<<endl;
    }
    
};

//Time Complexity is O(n^2)
void bubbleasc(Student a[],int n)//Bubble sort in ascending order
{
    Student temp;
    int i,j;
    cout<<"Bubble Sort\n";
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j].cgpa>a[j+1].cgpa)//comparing adjacent elements
            {
                temp=a[j];//if condition is true swapping them
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }//end of loop
        cout<<"Pass: "<<i+1<<"\n";//Displaying the one by one pass
        for(j=0;j<n;j++)
        {
            a[j].display();
        }
        cout<<"\n";
    }//end of loop
}

//Time Complexity is O(n^2)
void bubbledsc(Student a[],int n)//Bubble sort in Descending order
{
    Student temp;
    int i,j;
    cout<<"Bubble Sort\n";
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j].cgpa<a[j+1].cgpa)//comparing adjacent elements
            {
                temp=a[j];//if condition is true swapping them
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }//end of loop
        cout<<"Pass: "<<i+1<<"\n";//Displaying the one by one pass
        for(j=0;j<n;j++)
        {
            a[j].display();
        }
        cout<<"\n";
    }//end of loop
    cout<<"\n";
}

//Time Complexity is O(n^2)
void selectionasc(Student a[],int n)//Selection sort in ascending order
{
    int i,j;
    Student temp;
    int min=0;
    cout<<"Selection sort\n";
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i].cgpa>a[j].cgpa)//comparing with every elements
            {
                temp=a[i];//swapping with the smallest element in right side of array
		a[i]=a[j];
		a[j]=temp;
            }
        }//end of loop
        cout<<"Pass: "<<i+1<<"\n";//Displaying the one by one pass
        for(j=0;j<n;j++)
        {
            a[j].display();
        }//end of loop
        cout<<"\n";
    }//end of loop
    cout<<"\n";
}

//Time Complexity is O(n^2)
void selectiondsc(Student a[],int n)//Selection sort in Descending order
{
    int i,j;
    Student temp;
    int min=0;
    cout<<"Selection sort\n";
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i].cgpa<a[j].cgpa)
            {
                temp=a[i];//swapping with the smallest element in right side of array
				a[i]=a[j];
				a[j]=temp;
            }
        }//end of inner loop
        cout<<"Pass: "<<i+1<<"\n";//Displaying the one by one pass
        for(j=0;j<n;j++)
        {
            a[j].display();
        }//end of loop
        cout<<"\n";
    }//end of outer loop
    cout<<"\n";
}

//Time Complexity is O(n^2)
void insertionasc(Student a[],int n)//Insertion sort in Ascending order
{
    int i,j;
    Student temp;
    cout<<"Insertion sort\n";
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j].cgpa>temp.cgpa)//compairing the cgpa with one by one element from begining
        {
            a[j+1]=a[j];
            j=j-1;//decrementing
        }//end of while loop
        a[j+1]=temp;
        cout<<"Pass: "<<i<<"\n";//Displaying the one by one pass
        for(j=0;j<n;j++)
        {
            a[j].display();
        }
        cout<<"\n";
    }//end of loop
    cout<<"\n";
}


//Time Complexity is O(n^2)
void insertiondsc(Student a[],int n)
{
    int i,j;
    Student temp;
    cout<<"Insertion sort\n";
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j].cgpa<temp.cgpa)//compairing the cgpa with one by one element from begining
        {
            a[j+1]=a[j];
            j=j-1;//decrementing
        }//end of while loop
        a[j+1]=temp;
        cout<<"Pass: "<<i+1<<"\n";//Displaying the one by one pass
        for(j=0;j<n;j++)
        {
            a[j].display();
        }//end of display for loop
        cout<<"\n";
    }//end of for loop
    cout<<"\n";
}

int Partition(Student A[],int lb,int ub)
{
	int start,end;
	Student pivot,temp;
	pivot=A[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(A[start].cgpa<=pivot.cgpa)//compairing cgpa of start element with pivot elements cgpa
		{
			start++;
		}
		while(A[end].cgpa>pivot.cgpa)//compairing cgpa of end element with pivot elements cgpa
		{
			end--;
		}
		if(start<end)//else if start is less than end
		{
			temp=A[start];//swapping the elements at start and end
			A[start]=A[end];
			A[end]=temp;
		}
	}
	temp=A[lb];
	A[lb]=A[end];
	A[end]=temp;
	return end;
}

//Time Complexity is O(nlogn)
void Quicksort(Student A[],int lb,int ub)
{
	if(lb<ub)//if lower boun is lesser than upperbound
	{
	    //Taking the return value from partition function
		int loc=Partition(A,lb,ub);
		Quicksort(A,lb,loc-1);//Recursive calling of the function
		Quicksort(A,loc+1,ub);
	}
}

int main()
{
    int n,ch;
    //accepting number of students from the user
    cout<<"Enter the number of Students :"<<endl;
    cin>>n; //number of student
    Student s[n];//Student array
    
    //Accepting all student details from the user
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the details of Student "<<i+1<<" : "<<endl;
        s[i].accept();
    }
    do
    {
        //Menu driven Program
        cout<<"Enter the input from below list\n";
        cout<<"1.To sort cgpa in ascending order using bubblesort\n";
        cout<<"2.To sort cgpa in descending order using bubblesort\n";
        cout<<"3.To sort cgpa in ascending order using insertion sort\n";
        cout<<"4.To sort cgpa in descending order using insertion sort\n";
        cout<<"5.To sort cgpa in ascending order using quick sort\n";
        cout<<"6.To sort cgpa in ascending order using selection sort\n";
        cout<<"7.To sort cgpa in ascending order using selection sort\n";
        cout<<"8.To Exit the program\n";
        cout<<"Enter a choice :\n";
        cin>>ch;//choice for sorting
        
        switch(ch)
        {
            case 1://calling ascending bubble sort
                bubbleasc(s,n);
            break;
            
            case 2://calling dscending bubble sort
                bubbledsc(s,n);
            break;
            
            case 3://calling ascending insertion sort
               insertionasc(s,n);
            break;
            
            case 4://calling descending bubble sort
                insertiondsc(s,n);
            break;
            
            case 5://calling ascending quick sort
                Quicksort(s,0,(n-1));
                cout<<"Quick sort\n"<<endl;
                for(int j=0;j<n;j++)//Displaying the sorted cgpa after quick sort
                {
                    s[j].display();
                }
            break;
            case 6://calling ascending selection sort
                selectionasc(s,n);
            break;
            case 7://calling descending selection sort
                selectiondsc(s,n);
            break;
            case 8:cout<<"End of the Program\n";
            default:
                cout<<"Enter valid input"<<endl;
            break;
        }
        
    }while(ch!=8);
    return 0;
}

/*****************************************************************
 Output:
 Enter the number of Students in first year :
10

Enter the details of Student 1 : 
Enter roll_no : 
1
Enter CGPA : 
9.6

Enter the details of Student 2 : 
Enter roll_no : 
2
Enter CGPA : 
9.5

Enter the details of Student 3 : 
Enter roll_no : 
3
Enter CGPA : 
7.8

Enter the details of Student 4 : 
Enter roll_no : 
4
Enter CGPA : 
8.9

Enter the details of Student 5 : 
Enter roll_no : 
5
Enter CGPA : 
7.6

Enter the details of Student 6 : 
Enter roll_no : 
6
Enter CGPA : 
9.8

Enter the details of Student 7 : 
Enter roll_no : 
7
Enter CGPA : 
7.8

Enter the details of Student 8 : 
Enter roll_no : 
8
Enter CGPA : 
9.5

Enter the details of Student 9 : 
Enter roll_no : 
9
Enter CGPA : 
6.67

Enter the details of Student 10 : 
Enter roll_no : 
10
Enter CGPA : 
6.78
Enter the input from below list
1.To sort cgpa in ascending order using bubblesort
2.To sort cgpa in descending order using bubblesort
3.To sort cgpa in ascending order using insertion sort
4.To sort cgpa in descending order using insertion sort
5.To sort cgpa in ascending order using quick sort
6.To sort cgpa in ascending order using selection sort
7.To sort cgpa in ascending order using selection sort
8.To Exit the program
Enter a choice :
1
Bubble Sort
Pass: 1
2 	 9.5
3 	 7.8
4 	 8.9
5 	 7.6
1 	 9.6
7 	 7.8
8 	 9.5
9 	 6.67
10 	 6.78
6 	 9.8

Pass: 2
3 	 7.8
4 	 8.9
5 	 7.6
2 	 9.5
7 	 7.8
8 	 9.5
9 	 6.67
10 	 6.78
1 	 9.6
6 	 9.8

Pass: 3
3 	 7.8
5 	 7.6
4 	 8.9
7 	 7.8
2 	 9.5
9 	 6.67
10 	 6.78
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 4
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
9 	 6.67
10 	 6.78
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 5
5 	 7.6
3 	 7.8
7 	 7.8
9 	 6.67
10 	 6.78
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 6
5 	 7.6
3 	 7.8
9 	 6.67
10 	 6.78
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 7
5 	 7.6
9 	 6.67
10 	 6.78
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 8
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 9
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 10
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Enter the input from below list
1.To sort cgpa in ascending order using bubblesort
2.To sort cgpa in descending order using bubblesort
3.To sort cgpa in ascending order using insertion sort
4.To sort cgpa in descending order using insertion sort
5.To sort cgpa in ascending order using quick sort
6.To sort cgpa in ascending order using selection sort
7.To sort cgpa in ascending order using selection sort
8.To Exit the program
Enter a choice :
2
Bubble Sort
Pass: 1
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
9 	 6.67

Pass: 2
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
10 	 6.78
9 	 6.67

Pass: 3
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 4
3 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 5
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 6
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 7
2 	 9.5
1 	 9.6
6 	 9.8
8 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 8
1 	 9.6
6 	 9.8
2 	 9.5
8 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 9
6 	 9.8
1 	 9.6
2 	 9.5
8 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 10
6 	 9.8
1 	 9.6
2 	 9.5
8 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67


Enter the input from below list
1.To sort cgpa in ascending order using bubblesort
2.To sort cgpa in descending order using bubblesort
3.To sort cgpa in ascending order using insertion sort
4.To sort cgpa in descending order using insertion sort
5.To sort cgpa in ascending order using quick sort
6.To sort cgpa in ascending order using selection sort
7.To sort cgpa in ascending order using selection sort
8.To Exit the program
Enter a choice :
3
Insertion sort
Pass: 1
1 	 9.6
6 	 9.8
2 	 9.5
8 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 2
2 	 9.5
1 	 9.6
6 	 9.8
8 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 3
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 4
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 5
3 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
5 	 7.6
10 	 6.78
9 	 6.67

Pass: 7
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
10 	 6.78
9 	 6.67

Pass: 8
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8
9 	 6.67

Pass: 9
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8


Enter the input from below list
1.To sort cgpa in ascending order using bubblesort
2.To sort cgpa in descending order using bubblesort
3.To sort cgpa in ascending order using insertion sort
4.To sort cgpa in descending order using insertion sort
5.To sort cgpa in ascending order using quick sort
6.To sort cgpa in ascending order using selection sort
7.To sort cgpa in ascending order using selection sort
8.To Exit the program
Enter a choice :
4
Insertion sort
Pass: 2
10 	 6.78
9 	 6.67
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 3
5 	 7.6
10 	 6.78
9 	 6.67
3 	 7.8
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 4
3 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67
7 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 5
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 6
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67
2 	 9.5
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 7
2 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67
8 	 9.5
1 	 9.6
6 	 9.8

Pass: 8
2 	 9.5
8 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67
1 	 9.6
6 	 9.8

Pass: 9
1 	 9.6
2 	 9.5
8 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67
6 	 9.8

Pass: 10
6 	 9.8
1 	 9.6
2 	 9.5
8 	 9.5
4 	 8.9
3 	 7.8
7 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67


Enter the input from below list
1.To sort cgpa in ascending order using bubblesort
2.To sort cgpa in descending order using bubblesort
3.To sort cgpa in ascending order using insertion sort
4.To sort cgpa in descending order using insertion sort
5.To sort cgpa in ascending order using quick sort
6.To sort cgpa in ascending order using selection sort
7.To sort cgpa in ascending order using selection sort
8.To Exit the program
Enter a choice :
5
Quick sort

9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8
Enter the input from below list
1.To sort cgpa in ascending order using bubblesort
2.To sort cgpa in descending order using bubblesort
3.To sort cgpa in ascending order using insertion sort
4.To sort cgpa in descending order using insertion sort
5.To sort cgpa in ascending order using quick sort
6.To sort cgpa in ascending order using selection sort
7.To sort cgpa in ascending order using selection sort
8.To Exit the program
Enter a choice :
6
Selection sort
Pass: 1
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8

Pass: 2
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8

Pass: 3
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8

Pass: 4
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8

Pass: 5
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8

Pass: 6
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8

Pass: 7
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8

Pass: 8
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8

Pass: 9
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5
1 	 9.6
6 	 9.8


Enter the input from below list
1.To sort cgpa in ascending order using bubblesort
2.To sort cgpa in descending order using bubblesort
3.To sort cgpa in ascending order using insertion sort
4.To sort cgpa in descending order using insertion sort
5.To sort cgpa in ascending order using quick sort
6.To sort cgpa in ascending order using selection sort
7.To sort cgpa in ascending order using selection sort
8.To Exit the program
Enter a choice :
7
Selection sort
Pass: 1
6 	 9.8
9 	 6.67
10 	 6.78
5 	 7.6
7 	 7.8
3 	 7.8
4 	 8.9
2 	 9.5
8 	 9.5
1 	 9.6

Pass: 2
6 	 9.8
1 	 9.6
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9
8 	 9.5
2 	 9.5

Pass: 3
6 	 9.8
1 	 9.6
8 	 9.5
9 	 6.67
10 	 6.78
5 	 7.6
7 	 7.8
3 	 7.8
4 	 8.9
2 	 9.5

Pass: 4
6 	 9.8
1 	 9.6
8 	 9.5
2 	 9.5
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8
7 	 7.8
4 	 8.9

Pass: 5
6 	 9.8
1 	 9.6
8 	 9.5
2 	 9.5
4 	 8.9
9 	 6.67
10 	 6.78
5 	 7.6
7 	 7.8
3 	 7.8

Pass: 6
6 	 9.8
1 	 9.6
8 	 9.5
2 	 9.5
4 	 8.9
7 	 7.8
9 	 6.67
10 	 6.78
5 	 7.6
3 	 7.8

Pass: 7
6 	 9.8
1 	 9.6
8 	 9.5
2 	 9.5
4 	 8.9
7 	 7.8
3 	 7.8
9 	 6.67
10 	 6.78
5 	 7.6

Pass: 8
6 	 9.8
1 	 9.6
8 	 9.5
2 	 9.5
4 	 8.9
7 	 7.8
3 	 7.8
5 	 7.6
9 	 6.67
10 	 6.78

Pass: 9
6 	 9.8
1 	 9.6
8 	 9.5
2 	 9.5
4 	 8.9
7 	 7.8
3 	 7.8
5 	 7.6
10 	 6.78
9 	 6.67


Enter the input from below list
1.To sort cgpa in ascending order using bubblesort
2.To sort cgpa in descending order using bubblesort
3.To sort cgpa in ascending order using insertion sort
4.To sort cgpa in descending order using insertion sort
5.To sort cgpa in ascending order using quick sort
6.To sort cgpa in ascending order using selection sort
7.To sort cgpa in ascending order using selection sort
8.To Exit the program
Enter a choice :
8
End of the Program
Enter valid input
*******************************************************************/
