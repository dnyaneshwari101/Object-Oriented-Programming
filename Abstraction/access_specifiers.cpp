#include<iostream>
using namespace std;
class Car{
    public :
    void startCar()
    {
        turnOnIgnition();
        injectFuel();
        cout<<"\nCar Sarted!";
    }
    private : 
    void turnOnIgnition()
    {
        cout<<"\nIgnition turned on";
    }
    void injectFuel()
    {
        cout<<"\nFuel Injected";
    }
};
int main()
{
    Car myCar;
    myCar.startCar();
    return 0;
}