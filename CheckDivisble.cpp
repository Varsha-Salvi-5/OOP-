//Accept a number and display whether it is divisible by 7 or not

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\n Enter a number:";
    cin>>num;

    if(num%7==0)
        cout<<"Number is Divisible by 7";
    else
        cout<<"Number is Not Divisible by 7";
return 0;
}
