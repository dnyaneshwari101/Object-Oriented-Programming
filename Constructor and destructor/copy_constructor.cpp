#include <iostream>
using namespace std;
class Student{
private : 
string name;
int roll;

public :
//parameterized constructor
Student(string n, int r)
{
    name=n;
    roll=r;
    cout<<"\nParameterized constructor called";
}

//copy constructor
Student(const Student & obj)
{
name=obj.name;
roll=obj.roll;
cout<<"\nCopy constructor called"<<endl;
}
void display()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Roll No. : "<<roll<<endl;
}
};
int main()
{
    Student s1("Dnyaneshwari", 49);
    Student s2=s1;

    s1.display();
    s2.display();

    return 0;

}