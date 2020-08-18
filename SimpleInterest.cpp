//Accept loan amount, rate, tenure and display simple interest

#include<iostream>
using namespace std;

int main()
{
    float amount,tenure,rate,simple_interest;

    cout<<"\n Enter the principal amount:";
    cin>>amount;
    cout<<"\n Enter the tenure:";
    cin>>tenure;
    cout<<"\n Enter the rate of interest:";
    cin>>rate;

    simple_interest=(amount*tenure*rate)/100;

    cout<<"\n Simple Interest is:"<<simple_interest;

    return 0;
}
