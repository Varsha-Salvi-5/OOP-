//Display multiplication table of 7

#include<iostream>
using namespace std;

int main()
{
    int num=7;
    int res=1;

    for(int i=1;i<=10;i++)
    {
        res=num*i;
        cout<<"\n"<<"7"<<"*"<<i<<"="<<res;
    }
}
