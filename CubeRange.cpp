//1,8,27,64,125,216,343,512,729,1000 Display the sequence

#include<iostream>
using  namespace std;

int main()
{

    int res=1;
    for(int i=1;i<=10;i++)
    {
        res=i*i*i;
        cout<<"\n"<<res;
    }
return 0;
}

