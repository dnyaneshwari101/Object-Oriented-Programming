#include <iostream>
using namespace std;
class Rectangle{
private :
int length, width;

public : 
Rectangle(int l)
{
    length=l;
    width=l;
    cout<<"Constructor with single argument called"<<endl;
}
Rectangle(int l, int w)
{
    length=l;
    width=w;
    cout<<"Constructor with two arguments called"<<endl;

}
void display()
{
    cout<<"Length : "<<length<<endl;
    cout<<"Width : "<<width<<endl;
}
};
int main()
{
    Rectangle r1(5);
    r1.display();
    Rectangle r2(4,7);
    r2.display();
    return 0;
}