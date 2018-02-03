/* Write a program which input value of good, rate(18%) from user and calculate Goods and Service Tax */

#include<iostream>
using namespace std;
int main()
{
	float amount,GST,rate;
	cout<<"\n Enter the Amount of Goods  : \n";
	cin>>amount;
	cout<<"\n Enter the Rate  : \n";
	cin>>rate;
	GST=(amount*rate)/100;
	cout<<"\n GST is :: "<<GST <<"\n";
	return 0;
}

/*Output :~
Enter the Amount of Goods  : 625

Enter the Rate  : 18

GST is :: 112.5 */

