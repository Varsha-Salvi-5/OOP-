//Accept height, base and display area of triangle

#include<iostream>
using namespace std;

int main()
{
    float height,base,area;

    cout<<"\n Enter height of triangle:";
    cin>>height;
    cout<<"\n Enter base of triangle:";
    cin>>base;

    area=height*base/2;
    cout<<"\n Area of triangle is:"<<area;

    return 0;

}
