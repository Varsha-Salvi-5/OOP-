//Accept 2 numbers from user and display smallest number

#include<iostream>
using namespace std;

int main()
{
    int  num1,num2;

    cout<<"\n Enter two numbers:";
    cin>>num1>>num2;
    cout<<"\n First Number is:"<<num1<<"\n"<< "Second Number is:"<<num2;

    if(num1<num2)
        cout<<"\n"<<num1<<"\t is the smallest number";
    else if(num2<num1)
        cout<<"\n"<<num2<<"\t is the smallest number";
    else
        cout<<"\n Both are Equal";

}
