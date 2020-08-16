//Chapter No 2 Practice Question 3

//Q.The following program should interchange the values of two variables var1 and var2 and should print the new values of the variables. However, the program does not generate the desired output. Identify the error in the program and write the correct code.

// Answer  : Error was  Swap() was private and var2=var1 was wrong var2=temp is right
#include<iostream>
using namespace std;
class interchange

{

private:

   int var1;

int var2;

int temp;

public:
void swap()

{

   var1=5;

   var2=10;

   temp=var1;

   var1=var2;

   var2=temp;

}

void display()

{

   cout<<"The new value of variable1 is:"<<var1<<endl;

   cout<<"The new value of variable2 is:"<<var2<<endl;

}

};

int main()

{

   interchange I1;

   I1.swap();

   I1.display();

   return 0;

}

