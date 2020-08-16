//Chapter 2 Practice Question 1

/*Q.You have defined an Employee class as part of developing a software application for Diaz Telecommunications, Inc. The class, which you have defined, is as follows:
The Employee class definition shown above contains errors and is incomplete. Identify and fix the errors. Complete the code in the Employee class definition and write the main() function. Compile and execute the code.
*/

#include<iostream>
using namespace std;
class Employee
{

     char firstName[20];

     char lastName[20];

     char dateOfBirth[9];

     char dateOfJoining[9];

     char city[15];

     char phoneNo[11];

     public:

     void accept()
     {

     cout<<"Enter First Name:";
     cin>>firstName;
     cout<<"Enter Last Name:";
     cin>>lastName;
     cout<<"Enter Date of Birth:";
     cin>>dateOfBirth;
     cout<<"Enter Date of Joining:";
     cin>>dateOfJoining;
     cout<<"Enter City:";
     cin>>city;
     cout<<"Phone Number:";
     cin>>phoneNo;
     }

     void display()
     {

        cout<<"\n First Name:"<<firstName;
        cout<<"\n Last Name:"<<lastName;
        cout<<"\n Date of Birth:"<<dateOfBirth;
        cout<<"\n Date of Joining:"<<dateOfJoining;
        cout<<"\n City:"<<city;
        cout<<"\n Phone Number:"<<phoneNo;
     }

};


int main()
{
    Employee emp;

    emp.accept();
    emp.display();
}
