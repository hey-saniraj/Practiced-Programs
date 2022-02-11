#include<iostream>
using namespace std;

int raiseToPower(int base,int power)
{
    int result=1;
    for(int i=0;i<power;i++)
    {
           result=result*base;

    }

    return result;
  
}

int main()
{
    int threeEXpFour=raiseToPower(2,3);
    
    cout<<"2^3= "<<threeEXpFour<<endl;

     int threeEXpFour1=raiseToPower(2,8);
    
    cout<<"2^8= "<<threeEXpFour1<<endl;
    


}