//Accept 2 numbers from user and display power (1st no. raised by 2nd number)

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num1,num2;
    int res;
    cout<<"\n Enter two numbers:";
    cin>>num1>>num2;
    cout<<"\n First Number is:"<<num1<<"\n Second Number is:"<<num2<<"\n";
    res=pow(num1,num2);
    cout<<"\n Power of First number raised by Second number is:"<<res;

    return 0;

}
