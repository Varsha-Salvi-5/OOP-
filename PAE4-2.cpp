/*
Chapter No 4 Additional Exercise 2
Q.
Identify the error in the following code:
Fix the error in the preceding code and verify the same by executing the code.
*/
Answer: Declared var1 & var2 as global variables as both classes are accesing the variables
#include<iostream>
int var1=10;
int var2=20;
using namespace std;
class test
{
 public:
  void disp()
   {
     cout<<"var1="<<var1<<endl;
     cout<<"var2="<<var2<<endl;
   }
};
class sample
{
  public:
    void display()
     {
       cout<<"var1="<<var1;
       cout<<"var2="<<var2;
     }
};

int main()
{
sample S1;
S1.display();
return 0;
}




