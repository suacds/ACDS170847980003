/* Write a program in C++  finds the length of the string and also displays the string reverse, compare two strings to check whether they are equal or not and concatenate two strings, convert string to lower case/upper case
PROGRAM :*/
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
 int main()
  {
   char str[100],temp,ch,a,z;
   char str1[100], str2[100],s[50];
   int length,i=0,j=0;
   cout<<"Enter any string : ";
   gets(str);
   length = strlen(str);
   cout<<"***** String Length ***** ";
   cout<<"\nString Length: "<<length;
   
 
  j=strlen(str)-1;
  while(i<j)
   {
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
   i++;
   j--;
   }
   cout<<"\n***** Reverse String ***** ";
   cout<<"\nReverse String is: "<<str;
 
 	cout<<"\nEnter First String : ";
	gets(str1);
	cout<<"\nEnter Second String : ";
	gets(str2);
	
	if(strcmp(str1, str2)==0)
	{
		cout<<"\nBoth the Strings Are Equal";
	}
	else
	{
		cout<<"\nBoth the Strings Are Not Equal";
	}
    
    strcat(str1, str2);
	cout<<"\n***** Concatenation of String ***** ";
	cout<<"\nString After Concatenation is : "<<str1;
	
  cout<<"\nEnter the String : ";
  cin>>str;
  for(i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }
  cout<<"\n***** Lowercase to Uppercase String ***** ";
  cout<<"\nThe String in Uppercase = "<<str;
  
  return 0;
}

/* OUTPUT :
Enter any string : ASHISH                                                                                              
***** String Length *****                                                                                              
String Length: 6          
                                                                                             
***** Reverse String *****                                                                                             
Reverse String is: HSIHSA                                                                                              
Enter First String : ashish             
Enter Second String : DUSANE                                                                                           
Both the Strings Are Not Equal      
                                                                                   
***** Concatenation of String *****                                                                                    
String After Concatenation is : ashishDUSANE 
                                                                                                                       
***** Lowercase to Uppercase String *****  
Enter the String : ashish                                                                                                                                                                         
The String in Uppercase = ASHISH    
*/