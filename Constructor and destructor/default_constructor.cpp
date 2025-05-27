#include <iostream>
using namespace std;
class Car{
private :
string brand;
int year;

public : 
//default constructor
Car()
{
    brand="unknown";
    year=0;
    cout<<"\nDefault constructor called";
}
void display()
{
    cout<<"\nBrand : "<<brand;
    cout<<"\nYear : "<<year;
}
};
int main()
{
    Car audi;
    audi.display();
    return 0;
}
