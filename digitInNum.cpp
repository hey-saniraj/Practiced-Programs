#include<iostream>
using namespace std;
int main()
{
   int number;
   cout<<"Enter Number\n";
   cin>>number;

   
   if(number==0)
   cout<<"You have entered zero!";

   else
   {
       int counter=0;
       while (number!=0)
       {
            number=number/10;
            counter++;
       }
       cout<<"This number contains "<<counter<<" digits.";
       
   }

}