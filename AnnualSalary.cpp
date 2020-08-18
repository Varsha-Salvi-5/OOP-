//Accept employee id, name, salary and display his/ her details with annual salary.

#include<iostream>
using namespace std;

int main()
{
    int emp_id;
    char name[30];
    float salary,annual_salary;

    cout<<"\n Enter Employee Id:";
    cin>>emp_id;
    cout<<"\n Enter Name of Employee:";
    cin>>name;
    cout<<"\n Enter Monthly Salary of Employee:";
    cin>>salary;

    annual_salary=salary*12;

    cout<<"\n Annual Salary of Employee is:"<<annual_salary;

    return 0;
}
