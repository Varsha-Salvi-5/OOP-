//1. Display sum of odd numbers between 1 and 10

#include<iostream>
using namespace std;

int main()
{

    int sum=0;

    for(int i=1;i<=10;i++)
    {
        if(i%2!=0)
        {
            cout<<"\n"<<i;
            sum+=i;
        }

    }

    cout<<"\n Sum of Odd Numbers from 1 to 10 is:"<<sum;
}
