#include<iostream>
using namespace std;
class Company{
    private : 
                int salary; //private variable cannot be accessed outside the class
    public : 
                void set_salary(int full_time, int part_time) //set function
                {
                    salary = full_time + part_time;
                }

                int get_salary()//get function
                {
                    return salary;
                }
};
int main()
{
  Company obj;
  int full_time, part_time;
  cout<<"\nEnter full time salary : ";
  cin>>full_time;
  cout<<"\nEnter part time salary : ";
  cin>>part_time;
  obj.set_salary(full_time, part_time);
  cout<<"\nTotal Salary is : "<<obj.get_salary();
  return 0;
}