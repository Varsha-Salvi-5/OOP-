//Accept 10 numbers from user and display odd count, even count, odd sum, even sum

#include<iostream>
using namespace std;

int main()
{

    int numbers[10];
    int even_count=0,odd_count=0;
    int odd_sum=0,even_sum=0;
    cout<<"\n Enter ten numbers:";

    for(int i=0;i<10;i++)
    {
        cin>>numbers[i];

        if(numbers[i]%2!=0)
        {
            odd_sum+=numbers[i];
            odd_count++;
        }
        if(numbers[i]%2==0)
        {
            even_sum+=numbers[i];
            even_count++;
        }
    }
    cout<<"\n Number of Odd Numbers is:"<<odd_count;
    cout<<"\n Sum of Odd Numbers is: "<<odd_sum;

     cout<<"\n Number of Even Numbers is:"<<even_count;
    cout<<"\n Sum of Even Numbers is: "<<even_sum;
}
