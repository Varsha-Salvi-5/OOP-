/*
Chapter No 4 Additional Exercise 7
Q. Write a program to reverse a string
*/
#include<iostream>
using namespace std;
class Text
{
    char source[50],dest[50];
    int pos,j;
public:
    void reverseString()
    {
        pos=j=0;
        cout<<"Enter a String:";
        cin>>source;

                while(source[pos]!='\0')
                {
                    pos=pos+1;
                }
        for(--pos;pos>=0;dest[j++]=source[pos--]);
        dest[j]='\0';
        cout<<"\n The reversed string is:"<<dest;

    }
};

int main()
{
    Text t1;
    t1.reverseString();

return 0;
}
