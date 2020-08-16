//Chapter 2 Practice Question 2
/*Q. Jim works for an airline company. Customers fill the Booking Request Form with the details of the flight like the flight number, destination, and date and hand it over to Jim. He then books tickets for the customers based on the availability of seats.
Identify the classes and objects involved in the above scenario and their attributes. Write methods in the class to accept and display the values of the different attributes.*/



#include<iostream>
using namespace std;


class Customers
{
    int flight_number;
    char destination[20];
    char date[15];

public:

        void accept()
        {

            cout<<"Enter flight number:";
            cin>>flight_number;
            cout<<"Enter destination:";
            cin>>destination;
            cout<<"Enter date of booking:";
            cin>>date;

        }

        void display()
        {

            cout<<"\n Flight Number:"<<flight_number;
            cout<<"\n Destination:"<<destination;
            cout<<"\n Date of Booking:"<<date;
        }

};


int main()
{

    Customers flight;

    flight.accept();
    flight.display();
}
