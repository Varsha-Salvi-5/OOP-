/*CHAPTER NO 7  ADDITIONAL PRACTICE EXERCISE 1
Q.
Predict the output of the following code:*/
#include<iostream>
using namespace std;
void showNumber(int number)
{

     number=20;

     cout<< "\n Number is "<<20;

}

void displayNumbers(int number[])
{

     number[0]=30;

     cout<<"\n Number inside displayNumber is "<<number[0]<<endl;

}

int main()

{

     int numbers[]={4,5,6};

     cout<<"\n The number is "<<numbers[0]<<endl;

     showNumber(numbers[0]);

     cout<<"\n The number in main()after calling showNumber is"<<numbers[0]<<endl;

     displayNumbers(numbers);

     cout<<"\n The number in main() after calling displayNumbers is"<<numbers[0]<<endl;

}

 

