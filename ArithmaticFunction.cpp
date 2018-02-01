/*Write a program using functions which accept two integers as an argument and return its sum, sub, divide and multiply. Call all the functions from main( ) */

#include<iostream>
using namespace std;
int main()
{
      int x,y,z,mul(int,int);
      cout<<"\n Enter the value of x,y : ";
      cin>>x>>y;
      z=mul(x,y);
      cout<<"\n Multiplied value is : "<<z;
      return 0;
}
      int mul(int p,int q)
         {
                   int s,a,add(int,int);
               s=p*q;
                   a=add(p,q);
                   cout<<"\n Addition is : "<<a;
               return(s);
          }
      int add(int l, int m)
         {
                   int b,c,sub(int,int);
               b=l+m;
                   c=sub(l,m);
                   cout<<"\n Subtraction is : "<<c;
               return(b);
         }
       int sub(int e, int f)
        {
               int d;
               d=e-f;
               return(d);
         }

/*Output :-
Enter the value of x,y : 
20
10
Subtraction is : 10
Addition is : 30
Multiplied value is : 200*/
