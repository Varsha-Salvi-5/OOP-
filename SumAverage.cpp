///Accept 5 numbers from user and display sum and average of numbers.

#include<iostream>
using namespace std;

int main()
{
    int number[5];
    float sum=0.0,avg=0.0;

    cout<<"Enter five numbers:";

    for(int i=0;i<5;i++)
    {
        cin>>number[i];
        sum+=number[i];
    }

    avg=sum/5;

    cout<<"\n Sum of given numbers is:"<<sum;
    cout<<"\n Average of given number is:"<<avg;
}
