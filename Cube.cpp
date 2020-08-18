//Accept a number and display its cube.

#include<iostream>
using namespace std;

int main()
{
    int number,cube;

    cout<<"Enter a number:";
    cin>>number;

    cube=number*number*number;

    cout<<"\n Cube of given number "<<number<< "\t "<<"is:"<<cube;
    return 0;

}
