//1,4,9,16,25,36,49,64,81,100 Display the sequence

#include<iostream>
using  namespace std;

int main()
{

    int res=1;
    for(int i=1;i<=10;i++)
    {
        res=i*i;
        cout<<"\n"<<res;
    }
return 0;
}


