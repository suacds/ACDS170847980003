
Write a program in c++ using increment(Post and Pre) and decrement operators

//1) INCREMENT OPERATORS  :~
#include <iostream>
using std::cout;
using std::endl;
 
int main()
{
int b;

//Postincrement
b = 5; 
cout << "Value of b : "<< b << endl; 
cout << "Postincrement : " << b++ << endl; 
cout << "After Postincrement Value of b : " << b << endl; 

cout << endl; 

//Preincrement
b = 5; 
cout << "Value of b : " << b << endl; 
cout << "Preincrement : " << ++b << endl; 
cout <<"After Preincrement Value of b : " << b << endl; 
return 0;
} 

/*Output :~

Value of b : 5
Postincrement : 5
After Postincrement Value of b : 6

Value of b : 5
Preincrement : 6
After Preincrement Value of b : 6
*/

//2) DECREMENT OPERATORS  :~

#include <iostream>
using std::cout;
using std::endl;
 
int main()
{
int b;

// Postdecrement
b = 5; 
cout << "Value of b : "<< b << endl; 
cout << "Postdecrement : " << b-- << endl; 
cout << "After Postdecrement Value of b : " << b << endl;                     

cout << endl;

// Predecrement
b = 5; 
cout << "Value of b : " << b << endl; 
cout << "Predecrement : " << --b << endl; 
cout <<"After Predecrement Value of b : " << b << endl; 
return 0; 
} 

/*Output :~
Value of b : 5
Postdecrement : 5
After Postdecrement Value of b : 4

Value of b : 5
Predecrement : 4
After Predecrement Value of b : 4
*/

