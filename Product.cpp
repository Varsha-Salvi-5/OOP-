//Accept product units, price and display total price

#include<iostream>
using namespace std;

int main()
{

    int product_unit;
    float price,total;

    cout<<"\n Enter Product Units:";
    cin>>product_unit;
    cout<<"\n Enter Price:";
    cin>>price;

    total=product_unit*price;

    cout<<"\n Total Price is:"<<total;

    return 0;

}
