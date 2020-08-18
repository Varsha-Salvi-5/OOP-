//Display odd numbers between 11 and 20

#include<iostream>
using namespace std;

int main()
{
    cout<<"Odd numbers between 11 and 20 are:";
    for(int i=11;i<=20;i++)
    {
        if(i%2!=0)
        {
            cout<<"\n"<<i;
        }
    }

    return 0;
}
