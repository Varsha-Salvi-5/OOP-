//Accept 3 numbers from user and display greater number

#include<iostream>
using namespace std;

int main()
{

    int num1,num2,num3;

    cout<<"\n Enter three numbers:";
    cin>>num1>>num2>>num3;
    cout<<"\n First Number is:"<<num1<<"\n Second Number is:"<<num2<<"\n Third Number is:"<<num3;

    if(num1>=num2 && num1>=num3)
    {
        cout<<"\n"<<num1<<"\t is greater number";
    }

    else if(num2>=num1 && num2>=num3)
    {
        cout<<"\n"<<num2<<"\t is greater number";
    }

    else if(num3>num1 &&num3>num2)
    {
        cout<<"\n"<<num3<<"\t is greater number";
    }

    else
    {

        cout<<"\n All are equal numbers";
    }
return 0;
}

