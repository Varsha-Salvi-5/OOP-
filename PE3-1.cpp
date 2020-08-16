/*Q.
You have defined a Dealer class as part of developing the billing system software for Diaz Telecommunications, Inc. The class, which you have defined, is as follows:
*/
#include<iostream>
using namespace std;
class Dealer
{
 private:
    char mobileNo[11];
    char dealerName[25];
    char dealerAddress[51];
    char dealerCity[25];
    char phoneNo[11];
 public:
   static int CompanyID;
   static void showID()
{
//cout<<"The dealer name is"<<dealerName;  // Will throw error as dealername is non-static //member
    cout<<"The company ID is"<<CompanyID;

}
void get()
{
 cout<<"\n Enter the Dealer Name:";
 cin>>dealerName;
 cout<<"\n Enter the Dealer Address:";
 cin>>dealerAddress;
 cout<<"\n Enter the Dealer City:";
 cin>>dealerCity;
 cout<<"\n Enter the Dealer Phone Number:";
 cin>>phoneNo;
}
void print()
{
    cout<<"\n Dealer Name:"<<dealerName;
    cout<<"\n Dealer Address:"<<dealerAddress;
    cout<<"\n Dealer City:"<<dealerCity;
    cout<<"\n Dealer Phone Number:"<<phoneNo;
}
};
int Dealer :: CompanyID=6519;  //here as companyid is static variable it should be defined as follows with class name
int main()
{
    Dealer d1;
    d1.get();
    d1.print();
    Dealer::showID();

    return 0;
}
