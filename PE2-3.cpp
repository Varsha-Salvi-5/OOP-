//Chapter No 2 Practice Question No 3
//Q.Predict the output of the following code
#include<iostream>
using namespace std;

class Customer
{

public:
    int age;
};

int main()
{
    Customer obj1,obj2;
    cout<<"Enter the first customers age:";
    cin>>obj1.age;
    obj2=obj1;
    cout<<obj1.age<<"is the age of customer1"<<endl;
    cout<<obj2.age<<"is the age of customer2"<<endl;
    return 0;
}



 
