#include <iostream>
using namespace std;
class Demo
{
    public :
    //constructor 
    Demo()
    {
        cout<<"Constructor called"<<endl;
    }

    //destructor
    ~ Demo()
    {
        cout<<"Destructor called"<<endl;
    }
    void show()
    {
        cout<<"Inside show function"<<endl;
    }

};
int main()
{
    Demo d; //constructor called
    d.show();

    //destructor will be automatically called as d goes out of scope

    return 0;

}