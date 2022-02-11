#include<iostream>
using namespace std;

bool isPrimNumber(int number)
{
  bool isPrimeFlag=true;
    for(int i=2;i<number/2;i++)
    {
        if(number % i==0)
        {
            isPrimeFlag=false;
            break;
            //return false;
        }
    }
    //return true;
}


int main()
{
    /*int num;
    cout<<"Number: ";
    cin>>num;

  bool isPrimeFlag=isPrimNumber(num);       <-----------code to check number is prime or not
    
    if(isPrimeFlag)
     cout<<num<<" is a Prime number";
     else
     cout<<num<<" is not a Prime number";*/

      int i,counter=0;
    
     for(i=2;i<=100;i++)
     {
        bool isPrime=isPrimNumber(i);

       if(isPrime)
       {
         
          counter++;
          cout<<i<<" ";
          
          
       }
       
     }

     cout<<endl<<"Total Prime numbers = "<<counter;

}
