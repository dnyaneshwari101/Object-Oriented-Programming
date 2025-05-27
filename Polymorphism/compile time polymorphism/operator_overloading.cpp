#include<iostream>
using namespace std;

class Complex{
    private : float real, imag;
    public :
    Complex(float r=0,float i=0)//constructor
    {
        real=r;
        imag=i;
    }
    void print()
    {
        if(imag<0)
        {
            cout<<real<<imag<<"i"<<endl;
        }
        else
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
    }

    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

    Complex operator - (Complex c)
    {
        Complex temp;
        temp.real=real-c.real;
        temp.imag=imag-c.imag;
        return temp;
    }

};

int main()
{
    Complex c1(5,4);
    Complex c2(3,-2);
    c1.print();
    c2.print();
    Complex c3=c1+c2;// c3=c1.add(c2)
    cout<<"Addition is : ";
    c3.print();
    c3=c1-c2;
    cout<<"Substraction is : ";
    c3.print();
}