//Accept a number and display whether its in range (1-20) or not

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\n Enter a number:";
    cin>>num;

    if(num>=1 && num<=20)
        cout<<"\n Number is in range (1-20)";
    else
        cout<<"\n Number is not in range";

return 0;
}
