/*Q.
Predict the output of the following program:
*/
#include<iostream>
using namespace std;

class Counter
{
    private:
        unsigned int counte;

    public:
        Counter()
        {
            counte=0;

        }

        void inc_count(){counte++;}
        int get_count(){return counte;}

};

int main()
{
    Counter C1,C2;
    cout<<"\n C1="<<C1.get_count();
    cout<<"\n C2="<<C2.get_count();

    C1.inc_count();
    C2.inc_count();
    C2.inc_count();
    cout<<"\n C1="<<C1.get_count();
    cout<<"\n C2="<<C2.get_count();
return 0;
}

 
