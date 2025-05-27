#include<iostream>
using namespace std;
class Parent
{
    public :
    virtual void print()
    {
        cout<<"This is the function of the parent class"<<endl;
    }
};
class Child : public Parent
{
  public :
    virtual void print()
    {
        cout<<"This is the function of the child class"<<endl;
    }  
};
int main()
{
   Parent * p; //create a pointer of parent class
   Child c; //create an object of child class
   p = &c; //pointer of parent class points to the address of child class object 
   p->print(); //call the function using pointer of teh parent class

   //as the pointer of parent class conatains the object of base class, it will use overridden function of child class
   //if the print function is absent in the child class, it will call the function of parent class
   return 0;
}