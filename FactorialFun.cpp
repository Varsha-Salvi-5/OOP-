//Display factorial of 6.

#include<iostream>
using namespace std;
int fact(int n)
    {
        int factorial=1;
        if(n==0)
            return 1;
        else
             return n* fact(n-1);

    }

int main()
{

    int num=6;
    cout<<"\n Factorial of 6 is:"<<fact(num);

return 0;
}
