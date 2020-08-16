//Chapter No 2 Practice Question 1

/*Q. As a part of the team that is developing the billing system software for Diaz Telecommunications, Inc., you have been assigned the task of writing a program that accepts dealer details. The details to be captured are given below:
First Name
Last Name
City
Phone number
Write a C++ program to accept and display the dealer details. The dealer details should be displayed in the following format:

First name:	Last name:
City:	Phone number:
*/


#include<iostream>
using namespace std;

class Dealer
{
    char first_name[20];
    char last_name[20];
    char city[15];
    char phoneNo[11];

public:
        void accept()
        {

            cout<<"\n First Name:";
            cin>>first_name;
            cout<<"\n Last Name:";
            cin>>last_name;
            cout<<"\n City:";
            cin>>city;
            cout<<"\n Phone number:";
            cin>>phoneNo;
        }

        void display()
        {

            cout<<"First Name:"<<first_name;
            cout<<"\t Last Name:"<<last_name;
            cout<<"\n City:"<<city;
            cout<<"\t Phone number:"<<phoneNo;
        }

};


int main()
{

    Dealer de;

    de.accept();
    de.display();
    return 0;
}
