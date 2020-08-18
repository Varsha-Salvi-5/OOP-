//Display multiplication tables of numbers between 11 and 20

#include<iostream>
using namespace std;

int main()
{
    int res=1;
    for(int i=11;i<=20;i++)
    {
        cout<<"\n*******";
        for(int num=1;num<=10;num++)
        {

            res=i*num;
            cout<<"\n"<<i<<"*"<<num<<"="<<res;

        }
    }

    return 0;

}
