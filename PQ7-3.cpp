//CHAPTER NO 7 PRACTICE QUESTION 3
/*Consider the following class declaration:

#include<iostream.h>
class distance
{
     int length;
     public:
     distance(int);
     void operator =(distance);
};
Define the member-functions of the above class. The 'operator =()' function should overload the ‘=’ operator to assign the value of an object of the distance class to another object of the distance class. The operator function should display a meaningful message.

Answer:
*/
#include<iostream>
using namespace std;
class distance
{

    int length;
public:
    distance(int);
    void operator=(distance);

};
distance::distance(int a)
{
    length=a;
}
void distance:: operator =(distance d)
{

    if(length=d.length)
    {

        cout<<length<<"is equal to"<<d.length;
    }
    else
    {
        cout<<length<<"is not equal to"<<d.length;
    }
}
int main()
{
    distance d1(20);
    distance d2(20);
    d1=d2

    return 0;
}
