/* Count Vowels of String Prog. Using Pointer :-
Program :- /*
#include <iostream>
using namespace std;
int main() 
{
   // Declare Variables
   char str[20], *pt;
   int i = 0, c = 0;

   cout << "*** Count Vowels of String ***\n";
   cout << "Enter Any String : ";
   cin>>str;

   // Assign to Pointer Variable
  pt = str;
  while (*pt != '\0') {
  if (*pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u')
  c++;
  i++;
  pt++;
  }

  cout << "\nLength of String : " << i;
  cout << "\nVowels Count In the String : " << c;
  cout << "\nConstant Count in the String : " << (i - c);

  return 0;
}

/* Output :-
*** Count Vowels of String ***
Enter Any String : Pointers

Length of String : 9
Vowels Count In the String : 3
Constant Count in the String : 6
*/


