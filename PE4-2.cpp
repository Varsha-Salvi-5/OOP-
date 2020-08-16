/*
Chapter No 4 Practice Exercise 2
Q.
The following code to display the number of days in a month is very complex and therefore you need to simplify the code and execute:
*/

#include<iostream>
using namespace std;

int main()
{

    int month;

    cout<<"Enter the month number:";
    cin>>month;

    if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
    {
        cout<<"Month has 31 days";
    }

    else if((month==4)||(month==6)||(month==9)||(month==11))
    {
        cout<<"Month has 30 days";
    }
    else if((month==2))
    {
        cout<<"Month has 28 days or 29 days(if leap year)";
    }
    else
    {
      cout<<"Please enter correct month";
    }
}
