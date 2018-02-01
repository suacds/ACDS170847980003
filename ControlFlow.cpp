/*Write a program in c++ using all flow control statements (if, else, for , while and switch)*/

#include <iostream>
using namespace std;
int main()
{
	int num,dow;
	cout<<"Enter Any Number for control Flow Operations :";
	cin>>num;

	cout<<"\n ***** IF ELSE CONTROL FLOW *****\n";	
	if(num>0)
	{
		cout<<"\n [IF] Entered Number is "<<num;
	}
	else
	{
		cout<<"\n [ELSE] Entered number is below 0 is"<<num;
	}

		
	cout<<"\n\n ***** FOR CONTROL FLOW ***** \n";
	for(int i=1;i<=num;i++)
	{
		cout<<"\n\t"<<i;
	}

	cout<<"\n\n ***** WHILE CONTROL FLOW ***** \n";
	while(num>0)
	{
		cout<<"\n\n number is greater than 0 which is  : "<<num<<"\n\n";
		break;	
	}
	
	cout<<"\n ***** SWITCH CONTROL FLOW ***** \n\n";
	int ch;

    cout<<"Enter Number of Week's Day (1-7): ";
	cin>>dow;
	switch(dow)
	{
		case 1 : cout<<"\nSunday";
			break;
		case 2 : cout<<"\nMonday";
			break;
		case 3 : cout<<"\nTuesday";
			break;
		case 4 : cout<<"\nWednesday";
			break;
		case 5 : cout<<"\nThursday";
			break;
		case 6 : cout<<"\nFriday";
			break;
		case 7 : cout<<"\nSaturday";
			break;
		default : cout<<"\nWrong number of day";
			break;
	}
	
	return 0;
}

 /*Output :~
 Enter Any Number for control Flow Operations : 4

 ***** IF ELSE CONTROL FLOW *****

 [IF] Entered Number is 4

 ***** FOR CONTROL FLOW ***** 

	1
	2
	3
	4

 ***** WHILE CONTROL FLOW ***** 


 number is greater than 0 which is  : 4


 ***** SWITCH CONTROL FLOW ***** 

 Enter Number of Week's Day (1-7): 3

 Tuesday */

