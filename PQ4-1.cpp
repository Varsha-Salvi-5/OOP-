/*
Chapter No 4 Practice Question 1
Q. Write a program to accept the salaries of 10 employees from the user and display them in descending order for all the employees. If the user enters zero, the program should display the message “The amount should be greater than zero” and accept the value again.
*/

#include<iostream>
using namespace std;

class Employee
{
    int salary[10];

public:
        void accept()
        {
            cout<<"\n Enter salary for 10 employees";
            for(int i=1;i<=10;i++)
            {
                    cout<<"\n Employee "<<i<<"salary is:";
                    cin>>salary[i];
            }

        }
        void display()
        {

            for(int i=1;i<=10;i++)
            {
                    if(salary[i]==0)
                    {
                        cout<<"\n The amount should be greater then zero";
                        cout<<"\n Enter correct amount:";
                        cout<<"\n Employee "<<i<<"salary is:";
                        cin>>salary[i];

                    }
                    else
                    {
                    cout<<"\n Employee "<<i<<"salary is:"<<salary[i];
                    }
            }

        }

    void displaydes()
    {
        int temp;
            cout<<"\n Descending Order Salary";
            for(int i=1;i<=10;i++)
            {
                    for(int j=i+1;j<=10;j++)
                    {
                        if(salary[i]<salary[j])
                        {
                                temp=salary[i];
                                salary[i]=salary[j];
                                salary[j]=temp;
                         }
                 }
        }

        for(int i=1;i<=10;i++)
        {
            cout<<"\n"<<salary[i];
        }

    }
};

int main()
{

    Employee e1;

    e1.accept();
    e1.display();
    e1.displaydes();
    return 0;
}
