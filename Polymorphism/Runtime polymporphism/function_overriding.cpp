#include<iostream>
using namespace std;
class Parent
{
    public:
    void message()
    {
        cout<<"\nThis is a parent class";
        cout<<"\nHello there!";
    }
};
class Child : public Parent
{
    public:
    void message()
    {
        cout<<"\nThis is a child class";
        cout<<"\nHi, how are you?";
    }

};
int main()
{
    Child c;//declare the object of child class
    c.message();
    Parent p;
    p.message();
    return 0;
}