#include<iostream>
using namespace std;
class Animal // Abstract class
{
    public:
    virtual void sound()=0; //pure virtual function
};
class Dog : public Animal
{
    public : 
    void sound()
    {
        cout<<"Dog barks!"<<endl;
    }
};
class Cat : public Animal
{
    public :
    void sound()
    {
        cout<<"Cat meows!"<<endl;
    }
};
int main()
{
    // Animal a; - gives errror cannot create an object of abstract class
    Dog d;
    Cat c;
    d.sound();
    c.sound();
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Run time Polymorphism : ";
    //run time polymorphism
    Animal * a = new Dog(); // pointer type of base class points to the object of derived class
    a->sound(); 
    return 0;
}