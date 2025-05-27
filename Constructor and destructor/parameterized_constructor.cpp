#include <iostream>
using namespace std;
class Student{

private : 
string name;
int roll;

public :
//parameterized consructor
Student(string n, int r)
{
    name=n;
    roll=r;
}

void display()
{
    cout<<"\nName : "<<name;
    cout<<"\nRoll : "<<roll;
}
};
int main()
{
    Student s1("Dnyaneshwari", 49);
    Student s2("Siddhesh",50);
    s1.display();
    s2.display();
    return 0; 
}