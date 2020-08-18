//Accept 2 numbers and choice as A-Addition, S-Substraction, M-Multiplication, Q-Quotient and display result accordingly

#include<iostream>
using namespace std;

int main()
{

    int num1,num2;
    int res;

    cout<<"\n Enter two numbers:"<<endl;
    cin>>num1>>num2;

    char ch;
    cout<<"Enter choice: \n A for Addition \n S for Subtraction \n M for Multiplication \n Q for Quotient";
    cin>>ch;
    switch(ch)
    {

        case 'A':
                    res=num1+num2;
                    cout<<"\n Addition Result is:"<<res;
                    break;
        case 'S':
                    res=num1-num2;
                    cout<<"\n Subtraction Result is:"<<res;
                    break;
        case 'M':
                    res=num1*num2;
                    cout<<"\n Multiplication Result is:"<<res;
                    break;
        case 'Q':
                    res=num1/num2;
                    cout<<"\n Quotient Result is:"<<res;
                    break;
        default:
              cout<<"Thank You!!";

    }

}
