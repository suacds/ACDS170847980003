/* Write a C++ program, which initializes a string variable to the content "The desire to learn should be stronger than the desire to live" and outputs the string to the disk file OUT.TXT. Include all the header files if required.

Program :- */
#include <stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	
  	ofstream myfile;
  	myfile.open ("out.txt");
  	myfile << "\n\n The desire to learn should be stronger than the desire to live\n";
  	myfile.close();
	cout<<"\n\n Please check out.txt file .... !!! \n\n ";

	
	return 0;
}

/*Output :-

Please check out.txt file .... !!! 
*/