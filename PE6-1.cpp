//CHAPTER NO 6 PRACTICE QUESTION 1
/*Q.
Predict the output of the following program:
*/
#include <iostream>
using namespace std;
void square(int &);
class functionCall
{
     int number;
     public:
     functionCall();

};
functionCall::functionCall()
{
     number=10;
     square(number);

}
void square(int &num)
{

     cout<<num<<endl;
     num *= num; //This expression is resolved as num = num * num
     cout << num << endl;
}

int main()
{

     functionCall f1;
     return 0;
}

