/****************************************************************************
Roll Number-2321
Name-Gayatri Suresh Chaudhari
CNum-C22019221323

Assignment No: 1 [Matrix Operations]

Problem Statement:
Write C++ program to perform following operations on matrices:               

1.Check matrix is square matrix .
2.Check matrix is upper triangular.
3.Compute transpose of matrix .
4.Add  two matrices .
5.Multiply two matrices.
*****************************************************************************/

#include<iostream>
using namespace std;
//Matrix class
class matrix
{
    int a[20][20];
    int r,c;
    public:
    //parameterized constructor for initializing the variables
    matrix(int row,int column)
    {
        r=row;
        c=column;
    }
    //function declaration
    void accept();
    void display();
    void add(matrix,matrix);
    void multiplication(matrix,matrix);
    void transpose();bool square();
    bool uppertriangular();
};
//Function for Accepting the elements of matrix
//Time complexity O(n^2)
void matrix::accept()
{
    cout<<"enter the matrix elements"<<endl;
    for(int i=0;i<r;i++) //nested for loop for accepting element rowise
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
}
//Function for Displaying the elements of matrix
//Time complexity O(n^2)
void matrix::display()
{
    cout<<"Given matrix is"<<endl;
    for(int i=0;i<r;i++)////nested for loop for displaying element rowise
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
//Addition of two matrices
////Time complexity O(n^2)
void matrix ::add(matrix m2,matrix m1)
{
    if(m1.r==m2.r && m1.c==m2.c)//if both matrices have same row and column
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                a[i][j]=m1.a[i][j]+m2.a[i][j];//adding element by element
            }
        }
        cout<<"Resultant matrix is"<<endl;
        display();
    }
    else
    {
        cout<<"matrix addition not possible"<<endl;
    }
}
//Multiplication of two matrices
//Time complexity O(n^3)
void matrix::multiplication(matrix m1,matrix m2)
{
     if(m1.c==m2.r)//column of 1st matrix and row of second matrix should be same for multiplication
     {
         for(int i=0;i<m1.r;i++)
         {
             for(int j=0;j<m2.c;j++)
             {
                 int temp=0;//for storing the multiplication 
                 for(int k=0;k<m1.c;k++)
                 {
                     temp=temp+m1.a[i][k]*m2.a[k][j];
                     a[i][j]=temp;
                 }
             }
         }
         cout<<"Multiplication of given number are"<<endl;
         display();
     }
}
//Transpose of the matrix
////Time complexity O(n^2)
void matrix::transpose()
{
    int temp;
    matrix res_trans(r,c);
    if(r=c) //if row and column are same
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp=a[i][j];
                res_trans.a[i][j]=a[j][i];
                res_trans.a[j][i]=temp;
            }
        }
        cout<<"Transpose matrix is"<<endl;
        res_trans.display();
    }
    else //otherwise
    {
        for(int i=0;i<r;i++)
        {
            
            for(int j=0;j<c;j++)
            {
                res_trans.a[j][i]=a[i][j];
            }
        }
        res_trans.display();
    }
}
//Square matrix or not
//Time complexity O(1)
bool matrix::square()
{
    if(c==r)//if row and columns are same
    {
        cout<<"Given matrix is Square matrix"<<endl;
        return true;
    }
    else
    {
        cout<<"Given Matrix is not Square Matrix"<<endl;
        return false;
    }
}
//Finding whether upper triangular or not
//Time complexity O(n^2)
bool matrix::uppertriangular()
{
    int flag=0;
    if(square())
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(j<i && a[i][j]!=0)
                {
                    flag=1;
                }
            }
        }
    }
    if(flag==1)
    {
        cout<<"Matrix is not upper triangular matrix"<<endl;
        return false;
    }
    else
    {
        cout<<"It is upper triangular matrix"<<endl;
        return true;
    }
}
int main()
{
    int r,c,ch,r1,c1;
    cout<<"Enter the number of rows\n";
    //taking inputs of rows and columns of 1st matrix from user 
    cin>>r; 
    cout<<"Enter the number of columns\n";
    cin>>c;
    //taking inputs of rows and columns of 2nd matrix from user 
    cout<<"Enter the number of rows for 2nd matrix\n";
    cin>>r1;
    cout<<"Enter the number of columns for 2nd matrix\n";
    cin>>c1;
    
    matrix m1(r,c);//creating the objects of matrix class
    matrix m2(r1,c1);
    matrix m3(r1,c1);
    
    //Menu driven program
    cout<<"1:To accept the matrix"<<endl;
    cout<<"2:to display the matrix"<<endl;
    cout<<"3:Addition of two matrices"<<endl;
    cout<<"4:Multiplication of two Matrices"<<endl;
    cout<<"5:Transpose of the matrix"<<endl;
    cout<<"6:To find whether matrix is square or not"<<endl;
    cout<<"7:to find whether matix is upper triangular or not"<<endl;
    cout<<"8:End the program"<<endl;
    do{
        cout<<"Enter the choice from above list"<<endl;
        cin>>ch; //callling the function according to user choice
        switch(ch)
        {
            case 1:m1.accept();
            break;
            
            case 2:m1.display();
            break;
            
            case 3:
            m2.accept();
            m3.add(m1,m2);
            break;
            
            case 4:
             m2.accept();
             m3.multiplication(m1,m2);
            break;
            
            case 5:m1.transpose();
            break;
            
            case 6:m1.square();
            break;
            
            case 7:m1.uppertriangular();
            break;
            
            case 8:cout<<"End "<<endl;
            break;
            
            default:cout<<"Please enter the valid input"<<endl;
            break;
        }
    }while(ch!=8);//for ending the loop condition
    return 0;
}

/*****************************************************************************************
 * Output:
 * Enter the number of rows
3
Enter the number of columns
3
Enter the number of rows for 2nd matrix
3
Enter the number of columns for 2nd matrix
3
1:To accept the matrix
2:to display the matrix
3:Addition of two matrices
4:Multiplication of two Matrices
5:Transpose of the matrix
6:To find whether matrix is square or not
7:to find whether matix is upper triangular or not
8:End the program
Enter the choice from above list
1
enter the matrix elements
11
12
13
21
22
23
31
32
33
Enter the choice from above list
2
Given matrix is
11	12	13	
21	22	23	
31	32	33	
Enter the choice from above list
3
enter the matrix elements
1
2
3
4
5
2
1
2
4
Resultant matrix is
Given matrix is
12	14	16	
25	27	25	
32	34	37	
Enter the choice from above list
4
enter the matrix elements
1
1
1
0
0
0
1
2
1
Multiplication of given number are
Given matrix is
24	37	24	
44	67	44	
64	97	64	
Enter the choice from above list
5
Transpose matrix is
Given matrix is
11	21	31	
12	22	32	
13	23	33	
Enter the choice from above list
6
Given matrix is Square matrix
Enter the choice from above list
7
Given matrix is Square matrix
Matrix is not upper triangular matrix
Enter the choice from above list
8
End 

***************************************************************/