//Accept an year and check whether its leap year or not
#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<"\n Enter year to know whether it is leap year or not:";
    cin>>year;

    if(year%4==0)
    {
        cout<<"The given year:\t"<<year<<"\t a leap year";
    }
    else
    {
        cout<<"The given year:\t"<<year<<"\t not a leap year";
    }
}
