/*
Chapter No 4 Additional Exercise 6
Q. Write a program to find the number of vowels present in a line of text.
*/

#include<iostream>
using namespace std;
int main()
{
    char text[50];
    int counter=0;
    cout<<"Enter the text:";
    cin>>text;

    for(int i=0;text[i]!='\0';++i)
    {
        if(text[i]=='A'||text[i]=='a'||text[i]=='E'||text[i]=='e'||text[i]=='I'||text[i]=='i'||text[i]=='O'||text[i]=='o'||text[i]=='U'||text[i]=='u')
        {
            counter++;

        }

    }
            cout<<"\n Number of vowels in a String are:"<<counter;
    return 0;
}
