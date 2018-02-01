/* Write a menu driven C++ program to do following operation on two dimensional array B of size a x b. You should use user-defined functions which accept 2-D array A and its size a and b as arguments. The options are:

To input elements into matrix of size a x b
To display elements of matrix of size a x b 

PROGRAM :~ */

#include<iostream>
using namespace std;
void read_matrix(int a[10][10],int r,int c)
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<"\n Enter matrix elements :\t";
			cin>>a[i][j];
		}
	}
}
void display_data(int a[10][10],int r,int c)
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<< a[i][j];
		}
		cout<<"\n";
	}

}
int main()
{

	int a[10][10],r,c,ch;
	cout<<"\n Enter the Number of Rows : \t";
	cin>>r;
	cout<<"\n Enter the Number of Columns : \t";
	cin>>c;
	do
	{	cout<<"\n 1. INPUT MATRIX";
		cout<<"\n 2. DISPLAY MATRIX ";
		cout<<"\n 3. EXIT";
		cout<<"\n ENTER YOUR CHOICE : \t";
		cin>>ch;
		switch(ch)
		{
			case 1:  read_matrix(a,r,c);
			break;
			case 2:  display_data(a,r,c);
			break;
		}
	}while(ch<3);
    return 0;
}

 /* OUTPUT :~
 Enter the Number of Rows : 	3
 
 Enter the Number of Columns : 	3
 
 1. INPUT MATRIX
 2. DISPLAY MATRIX 
 3. EXIT
 ENTER YOUR CHOICE : 	1
 
 Enter matrix elements :	9
 
 Enter matrix elements :	6
 
 Enter matrix elements :	3
 
 Enter matrix elements :	8
 
 Enter matrix elements :	5
 
 Enter matrix elements :	2
 
 Enter matrix elements :	7
 
 Enter matrix elements :	4
 
 Enter matrix elements :	1
 
 1. INPUT MATRIX
 2. DISPLAY MATRIX 
 3. EXIT

 ENTER YOUR CHOICE : 	2
 9 6 3
 8 5 2
 7 4 1

 1. INPUT MATRIX
 2. DISPLAY MATRIX 
 3. EXIT
 ENTER YOUR CHOICE : 	3
