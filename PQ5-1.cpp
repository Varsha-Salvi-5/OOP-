/*
Chapter No 5 Practice Question 1
Q.Q. Write a program to accept a string from the command prompt. Further, include logic to reverse and display the accepted string.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(int argc,char* argv[])
{

  strrev(argv[1]);
  cout<<argv[1];

}
