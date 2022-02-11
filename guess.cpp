#include<iostream>
using namespace std;

int main()
{
    int hostUserNum,guestUserNum,tries;
    
    cout<<"Host: ";
    cin>>hostUserNum;
     system("cls");  //to clear the terminal

 
 for(tries=0;tries<3;tries++)
 {
    cout<<"Guest: ";
    cin>>guestUserNum;

    if (hostUserNum==guestUserNum)
    
    {
    cout<<"correct!"<<endl;
    break;
    }  
    

     else
     {
     cout<<"Inccorect Guess!!"<<endl;
     }

     //(hostUserNum==guestUserNum)?cout<<"correct!": cout<<"inccorect!!"<<endl;   ------>terminal operator

     

 }

}


    
     




