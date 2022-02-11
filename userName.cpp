#include<iostream>
using namespace std;
int main()
{
  int pin=1234,userPin,password=123,userPass,errorCounter=0,errorCounter1=0;
  do
  { 
    cout<< "Pin: ";
    cin>> userPin;
    if(pin != userPin)
    {
          errorCounter++;
      if(errorCounter<3 )

        {
         cout<<"Please Enter correct pin"<<endl;
        }
     
    }
   
  } while (errorCounter<3 && pin!=userPin);

  
    if(errorCounter<3)
    {
    do{
    cout<<"enter password: ";
    cin>> userPass;
    if(password != userPass)
    {
          errorCounter1++;
      if(errorCounter1<3 )

        {
         cout<<"Please Enter correct password"<<endl;
        }
     }

   } while (errorCounter1<3 && password!=userPass);
  
    if(errorCounter1<3)
    cout<<"login successfully";
    else
    cout<<"Please try after some time";

    }

    
    else
    cout<<"blocked!!";


  }
  
  

