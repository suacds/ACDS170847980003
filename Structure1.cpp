/* Structure Prog.  :-
Program :- /*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t 
{
  string title;
  int year;
} mine, yours;

void printmovie (movies_t movie);

int main ()
{
  string mystr;

  mine.title = "Harry Potter and Chamber Of Secrets";
  mine.year = 2002;

  cout << "Enter Movie Title : ";
  getline (cin,yours.title);
  cout << "Enter Year : ";
  getline (cin,mystr);
  stringstream(mystr) >> yours.year;

  cout << "My Favorite Movie Is :\t ";
  printmovie (mine);
  cout << "And Your Favourite Movie Is :\t ";
  printmovie (yours);
  return 0;
}

void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}

/* Output :-
Enter Movie Title : DDLJ
Enter Year : 1995

My Favorite Movie Is : Harry Potter and Chamber Of Secrets (2002)
And Your Favourite Movie Is : DDLJ (1995)

*/





