//Accept 2 numbers. Display their total and product

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    int total=0,product=1;
    cout<<"\n Enter two numbers:";
    cin>>num1>>num2;
    cout<<"\n First Number is:"<<num1<<"\n Second Number is:"<<num2;

    total=num1+num2;
    product=num1*num2;

    cout<<"\n Sum of two numbers is:"<<total;
    cout<<"\n Product of two numbers is:"<<product;

    return 0;


}
