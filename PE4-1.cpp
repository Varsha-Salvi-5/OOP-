/*
Chapter No 4 Practice Exercise 1
Q. Create a menu-driven application that accepts the salaries of ten employees and displays the following information:
The maximum salary
The minimum salary
The average salary
The number of employees whose salary is greater than 1000
The salaries in ascending and descending orders
Hint: Create a class Employee with the following member functions:

     void accept_details();

     void display_max();

     void display_min();

     void display_avg();

     void count();
*/
#include<iostream>
using namespace std;
class Employee
{
    int salary[10];
    int min_sal=salary[0];
    int max_sal=salary[0];
    int total=0;
    float avg=0.0;
    int counter=0;
        public:

                void accept_details()
                {
                    cout<<"\n Enter the salaries of 10 Employees:";

                    for(int i=1;i<=10;i++)
                    {

                        cout<<"\n Employee "<<i<<"salary is:";
                        cin>>salary[i];

                    }
                }


                void display_max()
                {
                    for(int i=1;i<10;i++)
                    {
                        if(max_sal<=salary[i])
                        {
                            max_sal=salary[i];
                        }
                    }

                    cout<<"\n Maximum Salary is:"<<max_sal;
                }

                void display_min()
                {

                     for(int i=1;i<10;i++)
                    {
                        if(min_sal>=salary[i])
                        {
                            min_sal=salary[i];
                        }
                    }

                    cout<<"\n Minimum Salary is:"<<min_sal;
                }

                 void display_avg()
                 {
                           for(int i=1;i<=10;i++)
                           {
                               total+=salary[i];
                           }

                            avg=total/10;
                            cout<<"\n Average Salary is:"<<avg;
                 }

                 void counte()
                 {
                     for(int i=1;i<=10;i++)
                     {

                         if(salary[i]>1000)
                         {
                             counter++;
                         }
                     }
                     cout<<"Number of employees whose salary is greater then 1000 is"<<counter;
                 }


            void display()
            {


                        int tempa;
                        cout<<"\n Ascending Order Salary";
                        for(int i=1;i<=10;i++)
                        {
                            for(int j=i+1;j<=10;j++)
                            {
                                if(salary[i]<salary[j])
                                {
                                        tempa=salary[i];
                                        salary[i]=salary[j];
                                        salary[j]=tempa;
                                }
                           }

                        }



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

            }

};

int main()
{
    Employee e1;
    int choice;
    int ch;
    cout<<"\n Enter choice:";
    cout<<"\n 1. Accept Details \n 2.Maximum Salary \n 3. Minimum Salary \n 4. Average Salary \n 5.Salary Greater than 1000  \n 6.Ascending & Descending Salary";
    cin>>choice;

do
{
    switch(choice)
    {
        case 1:
                cout<<"\n ***********Accepting Details************";
                e1.accept_details();
                break;
        case 2:
               cout<<"\n *********Maximum Salary*********";
               e1.display_max();
               break;
        case 3:
               cout<<"\n *********Minimum Salary*********";
               e1.display_min();
               break;
        case 4:
                cout<<"\n *************Average Salary************";
                e1.display_avg();
                break;
        case 5:
                cout<<"\n ************Salary Greater than 1000*********";
                e1.counte();
                break;
        case 6:
                cout<<"\n ***************.Ascending & Descending Salary*************";
                e1.display();
                break;
        default:
                cout<<"\n Thank You";
                break;
    }
    cout<<"\n Do you want to continue:(Type 1 for yes Type 0 for No)";
    cin>>ch;
}while(ch==1);
return 0;
}

