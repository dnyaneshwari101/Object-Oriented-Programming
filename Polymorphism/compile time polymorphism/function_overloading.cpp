#include<iostream>
using namespace std;
class Addition{
    public : 
    void sum(int a, int b)
    {
        cout<<"\nThe sum is : "<<a+b;
    }
    void sum(float a, float b)
    {
       cout<<"\nThe sum is : "<<a+b; 
    }
    void sum(int a, int b, int c)
    {
       cout<<"\nThe sum is : "<<a+b+c; 
    }
    void sum(int a, float b, int c)
    {
       cout<<"\nThe sum is : "<<a+b+c; 
    }
};
int main()
{
   Addition a;
   a.sum(1,2);
   a.sum(float(1.2),float(3.4));
   a.sum(1,2,3);
   a.sum(56,float(3.14),34);

   return 0;

}