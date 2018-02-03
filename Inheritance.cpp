/* Multiple Inheritance  Prog :-
Program :- /*
#include <iostream>
using namespace std;
class Person
{
     public:
        string profession;
        int age;

        Person(): profession("unemployed"), age(16) { }
        void display()
        {
             cout << "My Profession is: " << profession << endl;
             cout << "My Age is: " << age << endl;
             laugh();
             data();
        }
        void laugh() { cout << "I Can Laugh." << endl; }
        void data() { cout << "I am  Data Analyst." << endl; }
};

// SQL Teacher class is derived from base class Person.
class SQLTeacher : public Person
{
    public:
       void teachSQL() { cout << "I can teach SQL..." << endl; }
};

// Vollyballer class is derived from base class Person.
class Vollyballer : public Person
{
    public:
       void playVollyball() { cout << "I can play Vollyball." << endl; }
};

int main()
{
     SQLTeacher teacher;
     teacher.profession = "Programmer";
     teacher.age = 23;
     teacher.display();
     teacher.teachSQL();

     Vollyballer vollyballer;
     vollyballer.profession = "Vollyballer";
     vollyballer.age = 19;
     vollyballer.display();
     vollyballer.playVollyball();

     return 0;
}

/* Output :-
My Profession is : Programmer
My Age is : 23
I Can Laugh.
I am  Data Analyst.
I can teach SQL...

My Profession is : Vollyballer
My Age is : 19
I Can Laugh.
I am  Data Analyst.
I can play Vollyball.
*/
