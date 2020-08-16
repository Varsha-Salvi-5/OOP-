/*
Chapter No 4 Additional Exercise 4
Q. Write a program to find the total runs scored by a player in three cricket matches. Also, find the average of the runs scored.
*/
#include<iostream>
using namespace std;
class Cricket
{
    int runs[3];
    int total=0;
    float avg_runs;

    public:
        void details()
        {
            cout<<"\n Enter the runs scored in three matches by Player ABC:";
            for(int i=1;i<=3;i++)
            {
                cout<<"\n In Match \t" <<i<<" Run scored by Player  ABC:";
                cin>>runs[i];
                cout<<"\n";

            }
        }
        void display()
        {
                total=runs[1]+runs[2]+runs[3];
                cout<<"\n Total runs scored by player ABC is:"<<total;
                avg_runs=total/3;
                cout<<"\n Average Runs Scored by player in three matches is:"<<avg_runs;
        }
};
int main()
{
    Cricket c1;
    c1.details();
    c1.display();
    return 0;
}
