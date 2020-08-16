//Chapter No 2 Practice Question 4

/*Q. You need to write a program that accepts and displays the details of a specified number of candidates who want to register in the gym, SuperGym. The details should include:
candidate_id, containing integer type of data.
candidate_name, containing a character array of length 30 characters.
candidate_age, containing float type of data.
Enter your Remarks*/


#include<iostream>
using namespace std;

class SuperGym
{
    int number;
    int id[50];
    char name[50];
    int age[50];

public:


        void accept()
        {

            cout<<"Enter the number of candidates who want to register to SuperGym:";
            cin>>number;

            for(int i=0;i<number;i++)
            {
                cout<<"Enter Id:";
                cin>>id[i];
                cout<<"Enter Name:";
                cin>>name;
                cout<<"Enter Age:";
                cin>>age[i];
            }

        }

        void display()
        {
            for(int i=0;i<number;i++)
            {

                cout<<"\n Id:"<<id[i];
                cout<<"\n Name:";
                puts(name);
                cout<<"\n Age:"<<age[i];

            }
        }



};

int main()
{
    SuperGym gym;

    gym.accept();
    gym.display();

    return 0;
}
