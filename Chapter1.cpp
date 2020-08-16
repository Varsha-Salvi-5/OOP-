// Chapter No 1
/*Q. As a member of a team that is developing an automated booking system for the Railways, you have been assigned the task of creating a module that accepts the details of a passenger and checks whether the ticket has been confirmed or is in the waiting list. The module then prints the list of confirmed passengers. Declare a Ticket class that consists three member functions, booking(), status(), and print().
*/
#include<iostream>
using namespace std;

class Ticket
{
public:
    void booking()
    {
        cout<<"\n Accepting details for booking";
    }

    void status()
    {

        cout<<"\n Checking status of passenger is confirmed or not";
    }

    void print()
    {
        cout<<"\n Printing list of confirmed passengers";
    }
};


int main()
{
    Ticket tic;
    tic.booking();
    tic.status();
    tic.print();
    return 0;
}


