/*
An array stores details of 10 students (rollno, name, marks in three subject). Write a program to create such an array and print out a list of students who have failed in more than one subject.
*/

#include<iostream>
using namespace std;
struct stud
{
	int roll;
	char nm[50];
	float m1, m2, m3;
};

typedef stud S;

int main()
{
	S student[10];

	for(int i =0 ; i < 10 ; i++)
	{
		cout << "\n Enter Roll no :  \t";
		cin >> student[i].roll;

		cout << "\n Enter Name : \t";
		cin>>student[i].nm;

		cout << "\n Enter marks of three subjects : \t";
		cin >> student[i].m1 >> student[i].m2 >> student[i].m3 ;

	}

	cout<< "\n STUDENTS FAILED IN MORE THAN 1 SUBJECT \n ";
	for(int i =0 ; i < 10 ; i++)
	{
		if(( student[i].m1< 40 && student[i].m2 < 40) || (student[i].m2 < 40 && student[i].m3 < 40) || 
		( student[i].m1 < 40 && student[i].m3 < 40))
		cout << student[i].roll  << "\t" << student[i].nm << "\n";
	}
}

 /*OUTPUT :-
 Enter Roll no :  01                                                                                              
 Enter Name :   Ashish                                                                                                  
 Enter marks of three subjects :        65                                                                              
75                                                                                                                      
65                                                                                                                      

 Enter Roll no :  02                                                                                              
 Enter Name :   Shyam                                                                                                   
 Enter marks of three subjects :        39                                                                              
38                                                                                                                      
65                                                                                                                      
                                                                                                                        
 Enter Roll no : 03                                                                                              
 Enter Name :   Rashid                                                                                                  
 Enter marks of three subjects :        38                                                                              
35                                                                                                                      
69                                                                                                                      
                                                                                                                        
 Enter Roll no :  04    
Enter Name :   Bhushan                                                                                                 
 Enter marks of three subjects :        65                                                                              
41                                                                                                                      
39                                                                                                                      
                                                                                                                        
 STUDENTS FAILED IN MORE THAN 1 SUBJECT                                                                                 
 2      Shyam                                                                                                           
 3      Rashid                                          