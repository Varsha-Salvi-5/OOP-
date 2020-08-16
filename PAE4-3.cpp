/*
Chapter No 4 Additional Exercise 3
Q.
Consider the following program that assigns values to three different variables var1, var2, and var3 through a member function assign():
*/
//Answer: declare the variable var as public as they are not directly accessible in the main
#include<iostream>
using namespace std;
class values
{
   public:
   int var1;
   int var2;
   int var3;


   void assignment()
   {
     var1=5;
     var2=10;
     var3=15;
   }

   void display()
   {
     cout<<"The value of variable1 is:"<<var1<<endl;
     cout<<"The value of variable2 is:"<<var2<<endl;
     cout<<"The value of variable3 is:"<<var3<<endl;
   }
};
int  main()
{
    values V1;
    V1.assignment();
    V1.var2=20;
    V1.display();
    return 0;

}

 
