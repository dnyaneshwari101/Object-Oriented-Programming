#include<iostream>
using namespace std;
class Circle{
    private : float area;
    public : void setArea(float radius)
            {
                area=3.14*radius*radius;
            }

            float getArea()
            {
                return area;
            }

};
int main()
{
    Circle c;
    int r;
    cout<<"\nEnter the radius of circle : ";
    cin>>r;
    c.setArea(r);
    cout<<"\nArea of circle is : "<<c.getArea();
    return 0;
}