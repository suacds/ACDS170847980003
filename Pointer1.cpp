/* Add,Sub,Mul. Prog. Using Pointer :-
Program :- /*
#include <iostream>
using namespace std;
int main() 
{
   // Declare Variables
   int *p1, *p2;
   int num1, num2, sum, diff,mul;

   cout << "\nEnter the Two Numbers : \n";
   cin>>num1;
   cin>>num2;

   p1 = &num1;
   p2 = &num2;

   sum = *p1 + *p2;
   diff = *p1 - *p2;
   mul = (*p1) * (*p2);

   cout << "\n Difference : " << diff;
   cout << "\n Summation : " << sum;
   cout << "\n Product : " << mul;
   return 0;
}

/* Output :-
Enter the Two Numbers : 
10
5

Difference : 5
Summation : 15
Product : 50
*/



