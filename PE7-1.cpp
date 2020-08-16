//CHAPTER NO 7 PRACTICE EXERCISE 1

/*Q.
Complete the given partial code, which will allow the user to accomplish the following tasks:
Initialize hours, minutes, and seconds by using separate functions
Display the time in the given format, hh:mm:ss*/
#include<iostream>
using namespace std;
class Time
{
     //Declare hour, minute, and second
     int hour;
     int minute;
     int second;
     public:

     //Default constructor
     Time(){

            hour=0;
            minute=0;
            second=0;

     }
     //Constructor to set hour, minute, and second
     Time(int hr, int mini=0,int sec=0){

            hour=hour;

            minute=minute;

            second=second;

     }
     //User should be able to use this function to specify
     //hour, minute and second.
     void setTime(int h,int m ,int s)
     {

        hour=h;
        minute=m;
        second=s;

     }

      void setTime(int m)
     {
            minute=m;

     }
      void setTime(int m ,int s)
     {


        minute=m;
        second=s;

     }

     void display()
     {
         cout<<"\n Time is:"<<hour<<":"<<minute<<":"<<second;
     }

};

int main(){

     //Time object
     Time time;

     //Setting hour, minute, and second

     time.setTime(12,30,50);

     //Displaying time in the hh:mm:ss format

     time.display();

     //Setting the minute to 35 minutes past 12:00
     time.setTime(35);

     time.display();

     //Setting the minute and second

     time.setTime(42, 31);

     time.display();

     return 0;
}//End of main()
