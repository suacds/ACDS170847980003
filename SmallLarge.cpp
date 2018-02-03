/*Declare a 1 – Dimensional array in C++ and find the smallest and largest value in the array*/

#include <iostream>
using namespace std;
int main ()
{
int min,max;
const int Numb = 5;
int a[Numb];
for(int i=0;i<5;i++)
{
	cout<< "\nEnter the Values : ";
	cin>> a[i];
}
min=a[0];
max=a[0];
for(int i=1;i<5;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		else if(max<a[i])
		{
			max = a[i];
		}
	}
cout<<"Largest Number is : "<< max << endl;
cout<<"Smallest Number is : "<< min << endl;
return 0;
}
/*OUTPUT :
Enter the Values : 10
Enter the Values : 25
Enter the Values : 30
Enter the Values : 15
Enter the Values : 05

Largest Number is : 30
Smallest Number is : 5 
*/