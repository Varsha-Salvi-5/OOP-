/*
Question . Define a class worker with the following specification:
Private members:
wrkname, containing 25 characters.
hrwrked and wagerate, containing float type data.
totalwage, containing float type data (hrwrked * wagerate).
calcwage ( ), a function to find totalwage with float as return type data.
Public members:
input_data(), a function to accept values of all private members and to invoke calcwage.
output_data(), a function to display all the private members.
*/

#include<iostream>
using namespace std;

class Worker
{
    private:
    char wrkname[25];
    float hrwrked,wagerate,totalwage;

    float calcwage ()
    {

        totalwage= hrwrked*wagerate;

        return totalwage;

    }



    public:

             void input_data()
             {
                cout<<"\n Enter the worker name:";
                cin>>wrkname;
                cout<<"\n Enter the hardwork done by worker in hours:";
                cin>>hrwrked;
                cout<<"\n Enter the wage rate :";
                cin>>wagerate;
             }

             void output_data()
             {

                 cout<<"\n Worker Name:"<<wrkname;
                 cout<<"\n Hard work done by worker in hours:"<<hrwrked;
                 cout<<"\n Wage rate of worker:"<<wagerate;
                 cout<<"\n Total wage is:" <<calcwage();
             }


};


int main()
{

    Worker w1;

    w1.input_data();
    w1.output_data();



    return 0;
}
