//Accept a character and check whether its vowel or not

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a Character:";
    cin>>ch;

    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
        cout<<"The given character is Vowel";
    else
        cout<<"The given character is not a Vowel";
return 0;
}
