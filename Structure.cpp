/* Employee Record Prog. Using Structure :-
Program :- /*
#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1;
    
    cout << "Enter the Full Name of Employee: ";
    cin.get(p1.name, 50);
    cout << "Enter the Age: ";
    cin >> p1.age;
    cout << "Enter the Salary: ";
    cin >> p1.salary;

    cout << "\n****** Sandip University *****" << endl;
    cout << "Employee Name: " << p1.name << endl;
    cout <<"Employee Age: " << p1.age << endl;
    cout << "Employee Salary: " << p1.salary;

    return 0;
}

/* Output :-
Enter the Full Name of Employee: Ashish Chandrakant Dusane
Enter the Age: 23
Enter the Salary: 26000

****** Sandip University ******
Employee Name: Ashish Chandraakant Dusane
Employee Age: 23
Employee Salary: 26000
*/




