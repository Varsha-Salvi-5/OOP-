//Display squares of even numbers between 11 and 20

#include<iostream>
using namespace std;

int main()
{

    int res=1;

    for(int i=11;i<=20;i++)
    {
        if(i%2==0)
        {
            cout<<"\n"<<i;
            res=i*i;
            cout<<"\n Square of "<<i<<"is:"<<res;
        }

    }


}
