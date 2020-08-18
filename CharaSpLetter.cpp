//Accept a character and display whether its capital letter, small letter, digit or special character

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"\n Enter a char:";
    cin>>ch;

    if(ch>='A' && ch<='Z')
        cout<<"\n The Entered Character is Capital Letter";
    else if(ch>='a'&&ch<='z')
        cout<<"\n The Entered Character is Small Letter";
    else if(ch>='0' && ch<='9')
        cout<<"\n The Entered Character is Digit";
    else
        cout<<"\n The Entered Character is Special Character";

return 0;
}
