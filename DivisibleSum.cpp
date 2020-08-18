//Display sum of numbers divisible by 7 between 11 and 29

#include<iostream>
using namespace std;

int main()
{

    int sum=0;

    for(int i=11;i<=29;i++)
    {
        if(i%7==0)
        {
            cout<<"\n"<<i;
            sum+=i;
        }

    }

    cout<<"\n Sum of  Numbers  divisible from 11 to 29 is:"<<sum;
}
