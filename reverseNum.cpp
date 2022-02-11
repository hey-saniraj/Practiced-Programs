#include<iostream>
using namespace std;
int main()
{
    int number,reversedNumber=0;
    cout<<"Enter Number: ";
    cin>>number;

    while(number!=0)
    {
        
        
        int lastNum = number % 10;//123--3 ; 12---2;1---1
        
        reversedNumber=(reversedNumber*10)+ lastNum;//0+3; 30+2; 320+1
        
        number=number/10;//123/10=12; 12/10=1; 0

    }
    if(reversedNumber > INT32_MAX/10 || reversedNumber < INT32_MIN/10)
    cout<<0;
    else
    cout<<"Reversed: "<<reversedNumber;

    
}